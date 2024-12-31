// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string length(string str){
    return str.length();
}

int main() {
   string input;
   cout << "Enter the String :- ";
   cin >> input;
   
   cout << "The Length of String is :- " << length(input) << endl;
   
    return 0;
}



// Second Method 

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int length(string str){
    int count =0;
    for (int i=0;str[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main() {
   string input;
   cout << "Enter the String :- ";
   cin >> input;
   getline(cin, input);
   
   cout << "The Length of String is :- " << length(input) << endl;
   
    return 0;
}

// Third Method

#include <iostream>
#include <iterator>
using namespace std;

int length(string str) {
    return distance(str.begin(), str.end());
}

int main() {
    string input;
    cout << "Enter the String: ";
    getline(cin, input); 

    cout << "Length of the string: " << length(input) << endl;
    return 0;
}
