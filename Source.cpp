#include <iostream>;
#include <fstream>

int min_num(int** matrix, int n) {
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (min > matrix[i][j]) {
				min = matrix[i][j];
			}
		}
	}
	return min;
}

int max_num(int** matrix, int n) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];
			}
		}
	}
	return max;
}

int sum_of_digits(int num) {
	int summa = 0;
	while (num != 0) {
		summa += num % 10;
		num /= 10;
	}
	return summa;
}

bool contrast(int max, int min) {
	return abs(max - min) == 2;
}

void sort(int** matrix, int n) {
	for (int m = 0; m < n; m++) {
		for (int i = 1; i < n; i++) {
			int summa1 = 0;
			int summa2 = 0;
			for (int j = 0; j < n; j++) {
				summa1 += matrix[i][j];
				summa2 += matrix[i - 1][j];
			}
			if (summa1 < summa2) {
				int* tmp = matrix[i - 1];
				matrix[i - 1] = matrix[i];
				matrix[i] = tmp;
			}
		}
	}
}

int** read(int* n) {
	std::ifstream fin;
	fin.open("input.txt");
	int s;
	int** matrix;
	fin >> (*n);
	matrix = new int* [(*n)];
	for (int i = 0; i < (*n); i++) {
		matrix[i] = new int[(*n)];
	}
	for (int i = 0; i < (*n); i++) {
		for (int j = 0; j < (*n); j++) {
			fin >> s;
			matrix[i][j] = s;
		}
	}
	return matrix;
}


void write(int** matrix, int n) {
	std::ofstream fout("output.txt");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			fout << matrix[i][j] << " ";
		}
		fout << std::endl;
	}
}