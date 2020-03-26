#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5
#define N 10

int main ()
{
	int a[M][N];
	int i,j, n_min;
	for (i=0; i<M; i++)
		for(j=0; j<N; j++)
			a[i][j]=rand()%100;

	for (i=0; i<M; i++){
		for(j=0; j<N; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}

	for (i=0; i<N; i++){
		n_min=a[0][i];
		for(j=0; j<M; j++)
			if(a[j][i]<n_min)
				n_min=a[j][i];
		printf("min[%d]=%d\n", i, n_min);
	}

	return 0;
}