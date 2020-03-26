#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 10

int main ()
{
	int a[M][N];
	int i,j, a_min,a_max, i_min, i_max, j_min, j_max;
	for (i=0; i<M; i++)
		for(j=0; j<N; j++)
			a[i][j]=rand()%100;

	for (i=0; i<M; i++){
		for(j=0; j<N; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	for (i=0; i<M; i++){
		a_min=a[i][0];
		a_max=a[i][0];
		for(j=0; j<N; j++)
			{if(a[i][j]<a_min)
				{i_min=i;
				j_min=j;
				a_min=a[i][j];}
			if(a[i][j]>a_max)
				{i_max=i;
				j_max=j;
				a_max=a[i][j];}}
		a[i_min][j_min]=a_max;
		a[i_max][j_max]=a_min;}

	printf("\n");
	printf("\n");
	for (i=0; i<M; i++){
		for(j=0; j<N; j++)
			printf("%5d", a[i][j]);
		printf("\n");}
		return 0;
	}

