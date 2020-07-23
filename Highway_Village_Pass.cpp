#include<iostream>
#include <stdlib.h>
#include <stdio.h>

#define MaxN 1002
#define inf 65535	
int G[MaxN][MaxN];	
int dist[MaxN];	


void Init_G(int N, int M);	
int Prim(int N);
int FindMin(int N);	

int main()
{
	int N, M, wt;
	scanf("%d %d", &N, &M);
	
	Init_G(N, M);
	wt = Prim(N);
	printf("%d", wt);
	printf("\n");

	return 0;
}

void Init_G(int N, int M)	
{
	int i, j;
	for (i = 1; i <= N; i++)	
	{
		for (j = 1; j <= N; j++)
		{
			if (i == j)
				G[i][j] = 0;
			else
				G[i][j] = G[j][i] = inf;
		}
	}

	int s, d, wt;
	for (i = 0; i < M; i++)
	{
	
		scanf("%d %d %d", &s, &d, &wt);
		G[s][d] = G[d][s] = wt;
	}

	return;
}

int Prim(int N)
{
	int i, v, sumw, vcnt;
	sumw = 0;
	vcnt = 1;
	for (i = 1; i <= N; i++)	
		dist[i] = G[1][i];	

	while (1)
	{
		v = FindMin(N);
		if (v == -1)
			break;
		sumw += dist[v];
		dist[v] = 0;	
		vcnt++;
		for (i = 1; i <= N; i++)
		{
			if (dist[i] && G[v][i] < inf)	
			{
				if (G[v][i] < dist[i])
					dist[i] = G[v][i];
			}
		}
	}

	if (vcnt < N)
		return -1;
	else
		return sumw;
}

int FindMin(int N)
{
	int min, minv, i;
	min = inf;
	for (i = 1; i <= N; i++)
	{
		if (dist[i] && dist[i] < min)
		{
			min = dist[i];
			minv = i;
		}
	}
	if (min == inf)	
		return -1;
	else
		return minv;
}
