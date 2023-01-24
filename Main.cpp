#include <iostream>
#include <random>
#include <time.h>
using namespace std;

namespace Dmytro {
	template <typename T>
	void Sort(T arr[], const long size) {
		for (int i = 0; i < size - 1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (arr[i] > arr[j])
					swap(arr[i], arr[j]);
			}
		}
		cout << "Масив пiсля сортування: ";
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
	}
	void function() {
		srand(time(NULL));
		long size;
		cout << "Введіть кількість Елементiв масива: "; cin >> size;
		double* arr = new double[size];
		cout << "Масив до сортування:    ";
		for (int i = 0; i < size; i++) {
			arr[i] = (rand() % 100 - 50) / 2;
			cout << arr[i] << " ";
		}
		cout << "\n";
		Sort(arr, size);
    delete[] arr;
	}
}

int main() {
	Dmytro::function();

	return 0;
}
