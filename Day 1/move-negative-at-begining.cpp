#include <iostream>
//Incomplete
using namespace std;

int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int position = 0;
    bool status = false;
    int size_of_array = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size_of_array; i++) {
        if(arr[i] > 0) {
            cout << a[i] << " ";
            for(int j = i + 1; j < size_of_array; j++) {
                if(arr[j] < 0) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    position = j;
                    status = true;
                    break;
                }
            }
        }
        if(status) {
            i = position - 1;
        }
            cout << arr[i] << " ";
    }

    for(int i = 0; i < size_of_array; i++) {
        cout << arr[i] <<  " ";
    }

    return 0;
}