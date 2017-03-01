/*
 * 
 * ============================================================================
 * =========
 * 
 * Filename:  2d_matrix.c
 * 
 * Description:  2-dimensional array to 1-d array
 * 
 * Version:  1.0 Created:  2017/02/26  Compiler:  gcc Author:  Ding Damu Email:
 * dingdamu@gmail.com
 * 
 * =====================
 * ===============================================================
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
	int	A [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int	B [9];
	int	i,j, k;
	k = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			B[k] = A[i][j];
			k++;
		}

	}


	for (k = 0; k < 9; k++) {
		printf("%d ", B[k]);
	}

}
