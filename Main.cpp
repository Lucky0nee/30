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
		cout << "Масив пiсля сортування(сортування за зростанням): ";
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
	}
	void function() {
		srand(time(NULL));
		long size;
		cout << "Введіть кількість Елементiв масива: "; cin >> size;
		double* arr = new double[size];
		cout << "Масив до сортування: ";
		for (int i = 0; i < size; i++) {
			arr[i] = (rand() % 100 - 50) / 2;
			cout << arr[i] << " ";
		}
		cout << "\n";
		Sort(arr, size);
    cout << "\n";
    delete[] arr;
	}
}
namespace Tetiana{
void printArray(int *array, int length){
    for(int i = 0; i < length; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int getArraySize(){
    std::cout << "\nВведіть кількість елементів масиву : ";
    int size;
    std::cin >> size;
    return size;
}

void fillArray(int *array, int length){
    srand(static_cast<unsigned int>(time(nullptr)));

    std::cout << "Елементи масива : ";
    for(int i = 0; i < length; ++i){
        array[i] = (rand() % 1000) - 500;
        std::cout << (array[i]) << " ";
    }
}

void descendingSort(int *array, int length){
    std::cout << "\nЕлементи масива після сортування(сортування за спаданням) : ";

    for(int i = 0; i < length - 1; ++i){
        for(int j = 0; j < length - 1 - i; ++j){
            if(array[j] < array[j + 1]){
                int buffer = array[j + 1];
                array[j + 1] = array[j];
                array[j] = buffer;
            }
        }
    }
    printArray(array, length);
}

void getArray(){
    int length = getArraySize();
    if(length <= 0){
        std::cout << "Число має бути більше 0 !";
    }
    else{
        int *array = new int[length]();
        fillArray(array, length);
        descendingSort(array, length);
    }
}
}
int main() {
	Dmytro::function();
  Tetiana::getArray();

	return 0;
}
