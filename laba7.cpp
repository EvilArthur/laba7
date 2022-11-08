#include <iostream>
#include "Source.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int** matrix;
    int n;
    matrix = read(&n);
    int min = min_num(matrix, n);
    int max = max_num(matrix, n);
    int summa_min = sum_of_digits(min);
    int summa_max = sum_of_digits(max);
    if (summa_min == summa_max) {
        sort(matrix, n);
    }
    write(matrix, n);
}
