#include "logic.h"
int main() {
	int matrix[SIZE][SIZE];
	
	int size;
	cout << "Enter size of matrix: ";
	cin >> size;

	init(matrix, size, -5, 5);
	cout << "\nMatrix:\n" << convert(matrix, size) << endl;

	//cout << "Max element up main diagonale is "
	//	<< get_extreme_element_up_main_diagonale(matrix, size) << endl;

	//cout << "Min element up main diagonale is "
	//	<< get_min_element_down_main_diagonale(matrix, size) << endl;

	//cout << "Count even elements down main diagonale is "
	//	<< count_even_elements_down_main_diagonale(matrix, size) << endl;
	 
	//cout << "Count odd elements up additional diagonale is "
	//	<< count_odd_elements_up_additional_diagonale(matrix, size) << endl;

	//cout << "Count positive elements up main diagonale is "
	//	<< count_positive_elements_up_main_diagonale(matrix, size) << endl;

	//cout << "Count negative elements down additional diagonale is "
	//	<< count_negativee_elements_down_additional_diagonale(matrix, size) << endl;

	cout << "Are there any zero values below the main diagonal of the matrix?"
		<< (find_zero_element_down_main_diagonale(matrix, size) ? " - yes." :
		" - no.") << endl;

	cout << "Are there any zero values up the additional diagonal of the matrix?"
		<< (find_zero_element_up_additional_diagonale(matrix, size) ? " - yes." :
			" - no.") << endl;

	system("pause");

	return 0;
}