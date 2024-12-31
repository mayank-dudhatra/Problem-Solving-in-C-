// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool specialcharacter(string str, char ch){
    
    if(str.length() > 0 && str[str.length()-1]==ch){
        return true;
    }
    return false;
}

int main() {
  string input;
  cout << "Enter the String :- ";
  cin >> input;
  
  char ch;
  cout << "Enter the Special Character :- ";
  cin >> ch;
  
  if(specialcharacter(input,ch)){
      cout << "True" << endl;
  }
  else{
      cout << "False" << endl;
  }
   
    return 0;
}


// Second Methos

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool specialcharacter(string str, char ch){
    
    if(!str.empty() && str.back() == ch){
        return true;
    }
    return false;
}

int main() {
  string input;
  cout << "Enter the String :- ";
  cin >> input;
  
  char ch;
  cout << "Enter the Special Character :- ";
  cin >> ch;
  
  if(specialcharacter(input,ch)){
      cout << "True" << endl;
  }
  else{
      cout << "False" << endl;
  }
   
    return 0;
}