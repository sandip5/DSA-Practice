#include <iostream>

void rotate_array_clockwise(int arr[], int size_of_array) {
    int last_element = arr[size_of_array - 1];
    for(int i = size_of_array - 1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last_element;
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

    rotate_array_clockwise(arr, size_of_array);

    for(int i = 0; i < size_of_array; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}