#pragma once
#include <vector>
#include <random>

class BinarySearch {
private:
	std::vector<int> array;

    void shellSort(std::vector<int>& arr) {
        int n = arr.size();

        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j = i;
                while (j >= gap && arr[j - gap] > temp) {
                    arr[j] = arr[j - gap];
                    j -= gap;
                }
                arr[j] = temp;
            }
        }
    }


public:
	BinarySearch(int size) {
		//генерація випадкового числа(від'ємного також)
		std::random_device rand;
		std::mt19937 generate(rand());
		std::uniform_int_distribution<int> number(-50, 951);

		//запис випадкового числа у вектор
		for (int i = 0;i < size;i++) array.push_back(number(generate));

        //сортування у порядку зростання
        shellSort(array);
	}

};