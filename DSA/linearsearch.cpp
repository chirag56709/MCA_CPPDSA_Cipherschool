#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;  5
            
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter a number to search: ";
    cin >> target;
    
    int result = linearSearch(arr, size, target);
    
    if (result != -1) {
        cout << "Value " << target << " found at index " << result << endl;
    } else {
        cout << "Value " << target << " not found in the array" << endl;
    }

    return 0;
}
