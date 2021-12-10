#include <iostream>

using namespace std;

void union_of_two_sorted_array(int arr1[], int arr2[], int size_of_arr1, int size_of_arr2) {
    int i = 0, j = 0;
    while(i < size_of_arr1 && j < size_of_arr2) {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if(arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    while(i < size_of_arr1)
        cout << arr1[i++] << " ";
    
    while(j < size_of_arr2) 
        cout << arr2[j++] << " ";

    cout << "\n";
}

void intersection_of_two_sorted_array(int arr1[], int arr2[], int size_of_arr1, int size_of_arr2) {
    int i = 0, j = 0;
    while(i < size_of_arr1 && j < size_of_arr2) {
        if(arr1[i] < arr2[j])
            i++;
        else if(arr2[j] < arr1[i])
            j++;
        else {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int size_of_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    int size_of_arr2 = sizeof(arr2)/sizeof(arr2[0]);
    union_of_two_sorted_array(arr1, arr2, size_of_arr1, size_of_arr2);
    intersection_of_two_sorted_array(arr1, arr2, size_of_arr1, size_of_arr2);
    return 0;
}