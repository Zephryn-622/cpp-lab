#include <iostream>
using namespace std;

void bubblesort(int * arr, int length) {
    for(int i = 0; i < length - 1; i++) {
        for(int j = 0; j < length - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int * arr, int length) {
    cout << "Sorted array: ";
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[8] = {11, 2, 37, 0, 56, 61, 100, -1};
    int length = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, length);
    printArray(arr, length);

    return 0;
}