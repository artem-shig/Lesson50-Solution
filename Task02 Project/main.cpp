#include "logic.h"
int main() {
	int matrix[SIZE][SIZE];
	
	int size;
	cout << "Enter siz of matrix: ";
	cin >> size;

	init(matrix, size, 0, 100);
	cout << "\nMatrix:\n" << convert(matrix, size) << endl;

	cout << "Max element up main diagonale is "
		<< get_extreme_element_up_main_diagonale(matrix, size) << endl;

	cout << "Min element up main diagonale is "
		<< get_min_element_down_main_diagonale(matrix, size) << endl;

	cout << "Count even elements down main diagonale is "
		<< count_even_elements_down_main_diagonale(matrix, size) << endl;

	system("pause");

	return 0;
}