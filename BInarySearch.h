#pragma once
#include <vector>
#include <random>

class BinarySearch {
private:
	std::vector<int> array;

public:
	BinarySearch(int size) {
		//генерація випадкового числа(від'ємного також)
		std::random_device rand;
		std::mt19937 generate(rand());
		std::uniform_int_distribution<int> number(-50, 951);

		//запис випадкового числа у вектор
		for (int i = 0;i < size;i++) array.push_back(number(generate));


	}

};