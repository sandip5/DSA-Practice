#include <iostream>

int largest_sum(int arr[], int size_of_array) {
    int sum_of_subarray = arr[0];
    int largest_sum_of_subarray = arr[0];
    for(int i = 1; i < size_of_array; i++) {
        if(sum_of_subarray >= 0) {
            sum_of_subarray += arr[i];
        } else {
            sum_of_subarray = arr[i];
        }

        if(sum_of_subarray > largest_sum_of_subarray) {
            largest_sum_of_subarray = sum_of_subarray;
        }
    }

    return largest_sum_of_subarray;
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

    int largest_sum_subarray = largest_sum(arr, size_of_array);

    std::cout << "Largest sum: " << largest_sum_subarray;

    return 0;
}