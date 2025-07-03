#include "util.h"

void init(int matrix[SIZE][SIZE], int size, int a, int b) {
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}

string convert(int matrix[SIZE][SIZE], int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			s += to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}

	return s;
}