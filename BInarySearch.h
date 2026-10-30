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
    BinarySearch() { array.push_back(0); }

    int operator[](int index) { return array.at(index); }

    int sizeOfVector() { return array.size(); }

    void clearAllData() { return array.clear(); }

	void createSortedArray(int size) {
		//генерація випадкового числа(від'ємного також)
		std::random_device rand;
		std::mt19937 generate(rand());
		std::uniform_int_distribution<int> number(-50, 20);

		//запис випадкового числа у вектор
		for (int i = 0;i < size;i++) array.push_back(number(generate));

        //сортування у порядку зростання
        shellSort(array);
	}

    //індивідуальне завдання
    void replaceZeroWithAbsSumOfNegativeNum(int &sum) {
        int i = 0;
                
        //обрахунок суми від'ємних значень
        while (i < array.size() && array[i] < 0) { sum += array[i++]; }

        //зміна знаку суми
        sum = ((sum < 0) ? (-1) * sum : sum);

        //заміна нульових елементів на абсолютну суму
        for (; i < array.size();i++) {
            if (array[i] == 0) array[i] = sum;
            else if (array[i] > 0) break;
        }
    }

    //бінарний пошук числа. повертає індекс числа або -1 якщо такого нема
    int binarySearchAlgorithm(int x, int &count, std::wstring& result) {
        int low = 0;
        int high = array.size() - 1;
        result = L"";
        //для підрахунку кількості порівнянь
        count = 1;
        while (low <= high) {
            //індекс
            int mid = low + (high - low) / 2;

            //якщо знайшли елемент
            if (array[mid] == x) {
                result += L" значення знайдено! ";
                return mid;
            }
            //якшо шуканий елемент більший, відкидаємо ліву частину
            if (array[mid] < x)
            {   
                result += L" відкидаємо ліву частину; Масив: ";
                for (int i = mid; i < high+1;i++) {
                    result += L" ";
                    result += std::to_wstring(array[i]);
                }
                low = mid + 1;
            }
            //якшо шуканий елемент менший, відкидкаємо праву частину
            else {
                result += L" відкидаємо праву частину; Масив: ";
                for (int i = low; i < mid;i++) {
                    result += L" ";
                    result += std::to_wstring(array[i]);
                }
                high = mid - 1;
            }
            count++;
        }
        return -1;
    }
};