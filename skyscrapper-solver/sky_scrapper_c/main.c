#include <stdio.h>
#include "headers/board/board.h"
// #include "headers/solve_algo/solve_algo.h"
void	print_2d_array(unsigned int **arr, unsigned int N)
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

int	main(void)
{
	unsigned int	clues[] = {2, 2, 1, 3,
	/* unsigned int	*clues = {2, 2, 1, 3, */
		2, 2, 3, 1,
		1, 2, 2, 3,
		3, 2, 1, 3};
	/* unsigned int	*rev_clues; */
	/* unsigned int	*rev_clues; */
	unsigned int	**board;
	int	N;

	N = 4;
	board = ini_board(N);
	print_2d_array(board, N);
	print_board(clues, board);
	
	print_2d_array(solved(clues, board), N);


	return (0);
}
