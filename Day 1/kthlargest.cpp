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
    int size_of_array, temp, largest, smallest;
    std::cout << "Enter Size Of Array: ";
    std::cin >> size_of_array;
    std::cout << "Enter array element ";
    int arr[size_of_array];
    for(int i = 0; i < size_of_array; i++) {
        std::cin >> arr[i];
    }

    bubbleSort(arr, size_of_array);

    for(int i = 0; i < size_of_array; i++) {
        std::cout <<  arr[i] << " ";
    }

    std::cout << "\nEnter kth largest ";
    std::cin >> largest;
    std::cout << "\nEnter kth smallest ";
    std::cin >> smallest;

    std::cout << largest << "th Largest " << arr[size_of_array-largest] << std::endl;
    std::cout << smallest << "th Smallest " << arr[smallest-1] << std::endl;
    return 0;
}