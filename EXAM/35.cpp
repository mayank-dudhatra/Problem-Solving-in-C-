#include <iostream>
#include <string>
using namespace std;

string rightangletriangle(int size) {
    string result = "";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            result += "*"; 
        }
        result += "\n"; 
    }
    return result; 
}

int main() {
    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;

    cout << rightangletriangle(size) << endl;

    return 0;
}


// Second Method

