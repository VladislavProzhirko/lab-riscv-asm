#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 5
#define M 4
int process(int n, int m, int matrix[M][N]);

int main(int argc, char** argv)
{
    int matrix[M][N] = {{7, 4, 5, 5, 7},
                       {11, 4, 5, 8, 10},
                       {3, 12, 3, 6 ,4},
                       {9, 7, 4, 8, 3}};

    int min_el = process(N, M, matrix);
    printf ("Min element = %d", min_el);
    return 0;
}

int process(int n, int m, int matrix[M][N])
{
	int min_el = matrix [0][0];
        for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if (min_el > matrix[i][j])
			min_el = matrix[i][j];
			
	return min_el;    
}