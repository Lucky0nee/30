#include <iostream>
#include <random>
#include <time.h>
using namespace std;

namespace Dmytro { // Дмитро
	template <typename T>
	void Sort(T arr[], const long size) { // 20 10 30 50 40
		for (int i = 0; i < size - 1; i++) { // 20
			for (int j = i + 1; j < size; j++) { // 10
				if (arr[i] > arr[j]) // 20 > 10
					swap(arr[i], arr[j]); // 10 20
			}
		}
    cout << "Масив пiсля сортування: ";
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
    delete[] arr;
	}
	void function() {
		srand(time(NULL));
		long size;
		cout << "Введіть кількість Елементiв масива: ";
		cin >> size;
		double* arr = new double[size];
    cout << "Масив до сортування:    ";
		for (int i = 0; i < size; i++) {
        			arr[i] = (rand() % 100 - 50) / 2;
        			cout << arr[i] << " ";
    }
    cout << "\n";
		Sort(arr, size);
	}
}

int main() {
	Dmytro::function();

	return 0;
}
