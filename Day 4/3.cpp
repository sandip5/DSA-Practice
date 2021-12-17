#include <iostream>

using namespace std;

int main() {
    int count_number_of_zero = 0;
    int count_number_of_one = 0;
    int count_subarray = 0;
    cout << "Enter size of array ";
    int size_of_array;
    cin >> size_of_array;
    int arr[size_of_array];
    cout << "Enter elements of array ";
    for(int i = 0; i < size_of_array; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < size_of_array; i++) {
        for(int j = 0; j < i; j++) {
            if(arr[j] == 0) {
                count_number_of_zero++;
            } else if(arr[j] == 1) {
                count_number_of_one++;
            }
            if(count_number_of_one == count_number_of_zero) {
                cout++;
                count_number_of_one = 0
            }
        }
    }
    return 0;
}