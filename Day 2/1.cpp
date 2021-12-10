#include <iostream>

float _pow(float X, int N) {
    if(N == 0) {
        return 1;
    } else if(X == 0) {
        return 0;
    } else if(N < 0) {
        return 1/X * _pow(X, N + 1);
    } else {
        return X * _pow(X, N - 1);
    }
}

int main() {
    float X, result;
    int  N;
    std::cout << "Enter value of X ";
    std::cin >> X;
    std::cout << "\nEnter value of N ";
    std::cin >> N;
    result = _pow(X, N);
    std::cout << result;
    return 0;
}