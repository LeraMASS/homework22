﻿#include <iostream>
#include <cstdlib>
#include <ctime>

//Задача 1.
void pswap(int* n1, int* n2) {
	int tmp;
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
//Задача 2.
void вegree(int* num1, int num2) {
	int tmp;
	tmp = *num1;
	for (int i = 1; i < num2; i++)
		*num1 *= tmp;
}




int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1.
	std::cout << "Задача 1.\n";
	const int size = 10;
	int arr1[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	std::cout << "Массив:\n";
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr1[i] << ", ";
	std::cout << "\b\b }\n";

	std::cout << "Измененный массив:\n";
	int* parr1 = &arr1[0];
	for (int i = 0; i < size; i += 2) {
		if (*(parr1 + i) % 2 > 0)
			pswap(parr1 + i, parr1 + i + 1);
	}
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr1[i] << ", ";
	std::cout << "\b\b }\n";;


	//Задача 2.
	int n = 0;
	std::cout << "Задача 2.\n";
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << "Степень числа -> ";
	вegree(&n, 2);
	std::cout << n << std::endl;








	return 0;
}