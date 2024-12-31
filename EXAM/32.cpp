// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string categories(int age){
  return (age<0 ? "Invalid Age" :
         (age<13 ? "Tennager" :
         (age<=19 ? "Tennager" :
         (age<=59 ? "Adult" : "Senior"))));
}

int main() {
   int age;
   cout << "Enter the Age the Person :- ";
   cin >> age;
   
   cout << categories(age) << endl;

    return 0;
}