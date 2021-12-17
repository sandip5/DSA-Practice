#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int number_of_words;
    cout << "Enter number of words ";
    cin >> number_of_words;
    char input[number_of_words];
    for(int i = 0; i < number_of_words; i++) {
        cin >> input[i];
    }
    
    for(int i = 0; i < number_of_words; i++) {
        if(((i+1) % 2 == 0) && (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' 
        || input[i] == 'u' ||
        input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' 
        || input[i] == 'U')) {
            count++;
        } 
    }
    cout <<  "Number of vowels at even position: " << count;
    return 0;
}