#include <iostream>
using namespace std;

int* insertion_sort(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		int key = arr[i + 1];
		int j = i;
			
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j -= 1;
		}
			
		arr[j + 1] = key;
	}

	return arr;
}

int main() {
	int arr[] = { 5, 2, 4, 6, 1, 3 };
	int arr_size = sizeof(arr) / sizeof(int);

	int *sorted = insertion_sort(arr, arr_size);

	for (int i = 0; i < arr_size; i++) {
		std::cout << arr[i] << std::endl;
	}

	return 0;
}
