// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int largestnumber(int n1, int n2){
  return max(n1,n2);
}
int main() {
int n1;
cout << "Enter the First Number";
cin >> n1;

int n2;
cout << "Enter the Second Number";
cin >> n2;

cout << largestnumber(n1,n2) << endl;
   
    return 0;
}

// Second Methof

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int largestnumber(int n1, int n2){
    if (n1>n2){
        return n1;
    }
    else {
        return n2;
    }
   
}
int main() {
int n1;
cout << "Enter the First Number";
cin >> n1;

int n2;
cout << "Enter the Second Number";
cin >> n2;

cout << largestnumber(n1,n2) << endl;
   
    return 0;
}