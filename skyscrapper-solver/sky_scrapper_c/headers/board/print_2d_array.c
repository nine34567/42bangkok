#include <stdio.h>

void	print_22d_array(unsigned int **arr, unsigned int N)
{
		unsigned int	i;
		unsigned int	j;

		i = 0;
		while (i < N)
		{
			j = 0;
				/* while (j < N) */
				/* { */
				/* 		printf("(%d,%d)\t", i, j); */
				/* 		j++; */
				/* } */
				printf("\n");
				while (j < N)
				{
						printf("%d ", arr[i][j]);
						j++;
				}
				printf("\n");
				i++;
		}
}
