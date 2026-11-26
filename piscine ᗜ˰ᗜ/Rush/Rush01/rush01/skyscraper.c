#include <unistd.h>

#define SIZE 4

// Print board -----------------------------------------------
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_board(int board[SIZE][SIZE], int board_size)
{
	int i;
	int j;

	i = 0;
	while (i < board_size)
	{
		j = 0;
		while (j < board_size)
		{
			ft_putchar(board[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

// Filter prob board ------------------------------------------
// Filter one line of prob_board based on header
int line_filter(int num_header, int index_line, int line_length,
                int direction, int prob_board[SIZE][SIZE][SIZE])
{
	int k;

	if (num_header == 1)
	{
		k = 0;
		while (k < line_length - 1)
		{
			if (direction == 0) // top
				prob_board[0][index_line][k] = 0;
			else if (direction == 1) // bottom
				prob_board[line_length - 1][index_line][k] = 0;
			else if (direction == 2) // left
				prob_board[index_line][0][k] = 0;
			else if (direction == 3) // right
				prob_board[index_line][line_length - 1][k] = 0;
			k++;
		}
	}
	return (1);
}

int prob_filter(int top[], int bottom[], int left[], int right[],
				int prob_board[SIZE][SIZE][SIZE], int board_size)
{
	int i;

	i = 0;
	while (i < board_size)
	{
		line_filter(top[i], i, board_size, 0, prob_board);
		i++;
	}
	i = 0;
	while (i < board_size)
	{
		line_filter(bottom[i], i, board_size, 1, prob_board);
		i++;
	}
	i = 0;
	while (i < board_size)
	{
		line_filter(left[i], i, board_size, 2, prob_board);
		i++;
	}
	i = 0;
	while (i < board_size)
	{
		line_filter(right[i], i, board_size, 3, prob_board);
		i++;
	}
	return (1);
}

// Crawler populate ---------------------------------------------------
// Check if number already used in row/column
int is_safe(int board[SIZE][SIZE], int row, int col, int num)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

// Simple backtracking using prob_board
int solve(int board[SIZE][SIZE], int prob_board[SIZE][SIZE][SIZE], int row, int col)
{
	int num;

	if (row == SIZE)
		return (1);
	if (col == SIZE)
		return (solve(board, prob_board, row + 1, 0));

	num = 1 ;
	while (num <= SIZE)
	{
		if (prob_board[row][col][num - 1] && is_safe(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board, prob_board, row, col + 1))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int crawler_populate(int board[SIZE][SIZE],
					int prob_board[SIZE][SIZE][SIZE], int column_size)
{
	(void)column_size;
	return (solve(board, prob_board, 0, 0));
}

// main ----------------------------------------------------------
int main(void)
{
	int board[SIZE][SIZE] = {0};

	int prob_board[SIZE][SIZE][SIZE];
	int i, j, k;

	/* initialize all possibilities = 1 */
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			k = 0;
			while (k < SIZE)
			{
				prob_board[i][j][k] = 1;
				k++;
			}
			j++;
		}
		i++;
	}

	int example_input[16] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2};

	int top[4] = {example_input[0], example_input[1], example_input[2], example_input[3]};
	int bottom[4] = {example_input[4], example_input[5], example_input[6], example_input[7]};
	int left[4] = {example_input[8], example_input[9], example_input[10], example_input[11]};
	int right[4] = {example_input[12], example_input[13], example_input[14], example_input[15]};

	prob_filter(top, bottom, left, right, prob_board, SIZE);
	crawler_populate(board, prob_board, SIZE);
	print_board(board, SIZE);

	return (0);
}