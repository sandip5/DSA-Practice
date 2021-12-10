#include <iostream>

using namespace std;

void tower_of_hanoi(int number_of_disk, char from, char helping, char to) {
    if(number_of_disk > 0) {
        tower_of_hanoi(number_of_disk - 1, from, to, helping);
        cout << "From " << from << " to " << to << endl;
        tower_of_hanoi(number_of_disk - 1, helping, from, to);
    }
}

int main() {
    int number_of_disk;
    cout << "Enter number of disk ";
    cin >> number_of_disk;
    tower_of_hanoi(number_of_disk, 'A', 'B', 'C');
    return 0;
}