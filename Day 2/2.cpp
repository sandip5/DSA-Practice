#include <iostream>

using namespace std;

int fact(int num) {
    if(num == 0 && num == 1)
        return 1;
    else if(num > 1)
        return num * fact(num -1);
}

int main() {
    int num;
    cout << "Enter number for which you want to find factorial ";
    cin >> num;
    int result = fact(num);
    cout << "Factorial of " << num << " is " << result; 
    return 0;
}