#include "logic.h"

int foolproof(int matrix[SIZE][SIZE], int size) {
	if (size <= 0 || matrix == nullptr) {
		return 0;
	}
}

//int sum_elements_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
//	foolproof(matrix, size);
//
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (j > i) {
//				sum += matrix[i][j];
//			}
//		}
//	}
//
//	return sum;
//}

int sum_elements_up_main_diagonale(int matrix[SIZE][SIZE], int size) {
	foolproof(matrix, size);

	int sum = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)// ya etot variant s samogo nachala predlogil :)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}

//int sum_elements_down_main_diagonale(int matrix[SIZE][SIZE], int size) {
//	foolproof(matrix, size);
//
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (i > j) {
//				sum += matrix[i][j];
//			}
//		}
//	}
//	return sum;
//}

int sum_elements_down_main_diagonale(int matrix[SIZE][SIZE], int size) {
	foolproof(matrix, size);

	int sum = 0;

	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

int sum_elements_up_additional_diagonale(int matrix[SIZE][SIZE], int size) {
	foolproof(matrix, size);
	int sum = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}


int sum_elements_down_additional_diagonale(int matrix[SIZE][SIZE], int size) {
	foolproof(matrix, size);
	int sum = 0;

	for (int i = 1; i < size; i++)
	{
		for (int j = size - 1; j > size - i - 1; j--)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}
