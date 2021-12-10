#include <iostream>

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int arr[], int n) {
    int i,j;
    bool swapped;
    for(i = 0; i < n-1; i++) {
        swapped = false;
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
}

int main() {
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        std::cout <<  arr[i] << " ";
    }

    return 0;
}