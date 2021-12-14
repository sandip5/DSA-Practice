#include <iostream>

int count_inversion_of_array(int arr[], int size_of_array) {
    int inversion_count = 0;
    for(int i = 0; i < size_of_array; i++) {
        for(int j = i + 1; j < size_of_array; j++) {
            if(arr[i] > arr[j] && i < j) {
                inversion_count++;
            }
        }
    }
    return inversion_count;
}

int main() {
    int size_of_array;
    std::cout << "Enter Size Of Array: ";
    std::cin >> size_of_array;
    std::cout << "Enter array element ";
    int arr[size_of_array];
    for(int i = 0; i < size_of_array; i++) {
        std::cin >> arr[i];
    }
    int count = count_inversion_of_array(arr, size_of_array);
    std::cout << "Output: " << count;
    return 0;
}