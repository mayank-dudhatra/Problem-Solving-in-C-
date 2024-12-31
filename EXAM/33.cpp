// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string yearcheck(int year){
  return (year%100 == 0) ? "It is a Centurian Year." : "It is not a Centurian Year.";
}

int main() {
   int year;
   cout << "Enter the Year:- ";
   cin >> year;
   
   cout << yearcheck(year) << endl;

    return 0;
}

// Second Method

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string yearcheck(int year){
  switch (year%100 == 0) {
      case 0:
      return "It is a not Centurian Year.";
      break;
      
      case 1:
      return "It is a Centurian Year.";
      break;
  }
}

int main() {
   int year;
   cout << "Enter the Year:- ";
   cin >> year;
   
   cout << yearcheck(year) << endl;

    return 0;
}