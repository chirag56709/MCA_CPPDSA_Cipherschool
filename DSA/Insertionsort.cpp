#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && array[j - 1] > array[j]) {
            swap(array[j - 1], array[j]);
            j--;
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int array[] = {64, 54, 8, 9, 2};
    int size = sizeof(array) / sizeof (array[0]);
    insertionSort(array, size);
    cout << "Sorted array: ";
    printArray(array, size);
    return 0;
}
