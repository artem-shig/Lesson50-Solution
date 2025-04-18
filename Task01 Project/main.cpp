#include "logic.h"
int main() {
	int matrix[SIZE][SIZE];
	
	int size;
	cout << "Enter siz of matrix: ";
	cin >> size;

	init(matrix, size, 0, 100);
	cout << "\nMatrix:\n" << convert(matrix, size) << endl;

	cout << "The sum of elements alove main diagonale = "
		<< sum_elements_up_main_diagonale(matrix, size) << endl;

	cout << "The sum of elements lower main diagonale = "
		<< sum_elements_down_main_diagonale(matrix, size) << endl;

	cout << "The sum of elements alove additional diagonale = "
		<< sum_elements_up_additional_diagonale(matrix, size) << endl;

	cout << "The sum of elements lower additional diagonale = "
		<< sum_elements_down_additional_diagonale(matrix, size) << endl;

	system("pause");

	return 0;
}