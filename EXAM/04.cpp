// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

string CheckVowels(char letter) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || 
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ){
        return "  is a Vowels";
    }
    else{
        return " is a Consonant";
    }
}

int main() {
    
    char Letter;
    cout << "Enter the Character :- ";
    cin >> Letter;
    
    cout << Letter  << CheckVowels(Letter) << endl; 
    
    return 0;
}