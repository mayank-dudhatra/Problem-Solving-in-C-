// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string mergestring(string str1, string str2){
return str1 +" "+ str2;
}

int main() {
   string str1;
   cout << "Enter the First String :- ";
   cin >> str1;
   
   string str2;
   cout << "Enter the Second String :- ";
   cin >> str2;
   
   cout << mergestring(str1, str2)  << endl;
   
    return 0;
}

// Second method 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string mergestring(string str1, string str2){
   str1=str1 + " " + str2;
   return str1;
}

int main() {
   string str1;
   cout << "Enter the First String :- ";
   cin >> str1;
   
   string str2;
   cout << "Enter the Second String :- ";
   cin >> str2;
   
   cout << mergestring(str1, str2)  << endl;
   
    return 0;
}

// Third Method 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string mergestring(string str1, string str2){
   str1.append(str2);
   return str1;
}

int main() {
   string str1;
   cout << "Enter the First String :- ";
   cin >> str1;
   
   string str2;
   cout << "Enter the Second String :- ";
   cin >> str2;
   
   cout << mergestring(str1, str2)  << endl;
   
    return 0;
}


// Fourth Method 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string mergestring(string str1, string str2){
   for (int i = 0; i < str2.length(); i++) { 
        str1 += str2[i]; 
    }
   return str1;
}

int main() {
   string str1;
   cout << "Enter the First String :- ";
   cin >> str1;
   
   string str2;
   cout << "Enter the Second String :- ";
   cin >> str2;
   
   cout << mergestring(str1, str2)  << endl;
   
    return 0;
}