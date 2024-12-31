#include <iostream>
#include <string>

using namespace std;

string CheckNumber (int Num) {
    if(Num == 0){
        return "It is a Zero";
    }
    else if (Num > 0){
        return "It is a Positive Number";
    }
    else {
        return "It is a Negative Number";
    }
}

int main() {
    
    int Number;
    cout << "Enter the Number :- ";
    cin >> Number;
    
     cout << CheckNumber(Number);
    return 0;
}