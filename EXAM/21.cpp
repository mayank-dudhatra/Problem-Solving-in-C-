// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string uppercase (string str){
    for (int i=0; i<str.length();i++){
        str[i] = toupper(str[i]);
    }
    return str;
}


int main() {
    string input;
   cout << "Enter the String :- ";
   cin >> input;
   
   cout << uppercase(input) << endl;
   
    return 0;
}

// Second Method
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

  string uppercase(string str){
      for (int i=0;i<str.length();i++){
          if(str[i] >= 'a' && str[i]<='z'){
              str[i] = str[i]-32;
          }
          return str;
      }
  };
int main() {
    
string input;
   cout << "Enter the String :- ";
   cin >> input;
   
   cout << uppercase(input) << endl;
    return 0;
}

// Third Method


// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

  string uppercase(string str){
      transform(str.begin(), str.end(), str.begin(), ::toupper);
      return str;
  };
int main() {
    
string input;
   cout << "Enter the String :- ";
   cin >> input;
   
   cout << uppercase(input) << endl;
    return 0;
}