 #include <stdio.h>  
  #include <stdlib.h>  
   #include <string.h>  
   #include <math.h>  
   #define KEYLENGTH 12        //??????????  
   #define MAXTABLESIZE 1000000    //????????????  
   #define MAXD 5      //?????????????  
   typedef char ElementType[KEYLENGTH ];  
   typedef int Index; //??????  
    
  //?????  
  typedef struct LNode *PtrToLNode;  
  struct LNode {  
      ElementType Data;  
      PtrToLNode Next;  
      int Count;  
  };  
  typedef PtrToLNode Position;  
  typedef PtrToLNode List;  
    
  //???????  
  typedef struct TblNode *HashTable;  //?????  
  struct TblNode {  
      int TableSize; //??????  
      List Heads;    //??????????  
  };  
    
  int NextPrime( int N ) {  
      //????N????MAXTABLESIZE?????  
      int i, p = ( N % 2 ) ? N + 2 : N + 1;   //???N????????  
      while ( p <= MAXTABLESIZE ) {  
          double q = p;  
          for ( i = (int)sqrt(q); i > 2; i-- )  
              if ( !(p % i) ) break; //p????  
          if ( i == 2 ) break; // for????,??p???  
          else p += 2; //?????????  
      }  
      return p;  
  }  
    
  HashTable CreateTable ( int TableSize ) {  
      HashTable H;  
      int i;  
      H = (HashTable)malloc(sizeof(struct TblNode));  
      H->TableSize = NextPrime(TableSize); //????????????  
      //???????????  
      H->Heads = (List)malloc(H->TableSize * sizeof(struct LNode)); //??????????  
      for ( i = 0; i < H->TableSize; i++ ) { //???????  
          H->Heads[i].Data[0] = '\0';  
          H->Heads[i].Next = NULL;    //???NULL  
          H->Heads[i].Count = 0;  //????????0  
      }  
      return H;   //???????????????  
  }  
    
  //hash??  
  Index Hash ( const char *Key, int TableSize ) {  
      unsigned int h = 0; //?????,????0  
      while ( *Key != '\0' ) //????  
          h = ( h << 5 ) + *Key++;    //????
      return h % TableSize;  
  }  
    
  Position Find ( HashTable H, ElementType Key ) {  
      Position P;  
      Index Pos;  
      Pos = Hash( Key + KEYLENGTH - MAXD, H->TableSize ); //??????(??hash??????)  
      P = H->Heads[Pos].Next;     //??????1?????  
      while ( P && strcmp( P->Data, Key ) )   //?????Key,?????:P?NULL, ??????  
          P = P->Next;  
    
      return P;   //??P?????????,???NULL  
  }  
   
  int Insert ( HashTable H, ElementType Key ) {  
     Position P, NewCell;  
     Index Pos;  
     P = Find( H, Key ); //???:??or???  
      if ( !P ) { //??????,????(??????????????,????hash?????????,?????????)  
         NewCell = (Position)malloc(sizeof(struct LNode));  
          strcpy(NewCell->Data, Key);  
         NewCell->Count = 1; //??+1  
          Pos = Hash( Key + KEYLENGTH - MAXD, H->TableSize ); //??????  
          //?NewCell???H->Heads[Pos]????????(???)  
          NewCell->Next = H->Heads[Pos].Next;  
          H->Heads[Pos].Next = NewCell;  
    
          return 1;  
      }  
      else { //??????  
          P->Count++;  
          return 0;  
     }  
  }  
    
  void DestroyTable( HashTable H ) {  //????  
      int i;  
      Position P, Tmp;  
      //?????????  
     for( i = 0; i < H->TableSize; i++ ) {  
         P = H->Heads[i].Next;  
         while ( P ) {   //??????????????  
             Tmp = P->Next;  
             free( P );  
             P = Tmp;  
        }  
     }  
     free( H->Heads ); //???????  
     free( H );        //????????  
 }  
   
 void ScanAndOutput ( HashTable H ) {  
     int i, MaxCnt = 0, PCnt = 0;  
     ElementType MinPhone;  
     List Ptr;  
     MinPhone[0] = '\0';  
     for ( i = 0; i < H->TableSize; i++ ) { //????  
        Ptr = H->Heads[i].Next; //??????1?????  
         while ( Ptr ) {  
             //?????????  
             if ( Ptr->Count > MaxCnt ) { //????????  
                 MaxCnt = Ptr->Count;  
                 strcpy( MinPhone, Ptr->Data );  
                 PCnt = 1;  
             }  
             else if ( Ptr->Count == MaxCnt ) {  
                 PCnt++; //????  
                if ( strcmp( MinPhone, Ptr->Data ) > 0 )  
                    strcpy( MinPhone, Ptr->Data ); //???????????  
             }  
             Ptr = Ptr->Next;  
         }  
    }  
     printf("%s %d", MinPhone, MaxCnt);  
     if ( PCnt > 1 )  
         printf(" %d", PCnt);  
    printf("\n");  
 }  
 int main () {  
     int N, i;  
     ElementType Key;  
     HashTable H;  
     scanf("%d", &N);  
     H = CreateTable( N * 2 );   //???????  
     for ( i = 0; i < N; i++ ) {  
         scanf("%s", Key); Insert( H, Key );  
         scanf("%s", Key); Insert( H, Key );  
     }  
     ScanAndOutput( H );  
    DestroyTable( H );  
  
     return 0;  
 }
