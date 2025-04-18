#include "logic.h"

int foolproof(int matrix[SIZE][SIZE], int size) {
	if (size <= 0 || matrix == nullptr) {
		return 0;
	}
}

int get_extreme_element_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
	foolproof(matrix, size);

	int max = INT_MIN;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int get_min_element_down_main_diagonale(int matrix[SIZE][SIZE], int size) {
	foolproof(matrix, size);

	int min = INT_MAX;

	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}
	}
	return min;
}

int count_even_elements_down_main_diagonale(int matrix[SIZE][SIZE], int size){
	foolproof(matrix, size);

	int count = 0;

	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (matrix[i][j] % 2 == 0) {
				count++;
			}
		}
	}
	return count;
}


