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


// Second Method

#include <iostream>
#include <string>
using namespace std;

string categories(int age) {
    if (age < 0) return "Invalid Age";
    else if (age < 13) return "Child";
    else if (age <= 19) return "Teenager";
    else if (age <= 59) return "Adult";
    else return "Senior";
}

int main() {
    int age;
    cout << "Enter the Age of the Person: ";
    cin >> age;

    cout << categories(age) << endl;

    return 0;
}

// Third Method 

#include <iostream>
#include <string>
using namespace std;

string categories(int age) {
    switch (age) {
        case -1000 ... -1:
            return "Invalid Age";
        case 0 ... 12:
            return "Child";
        case 13 ... 19:
            return "Teenager";
        case 20 ... 59:
            return "Adult";
        default:
            return age > 59 ? "Senior" : "Invalid Age";
    }
}

int main() {
    int age;
    cout << "Enter the Age of the Person: ";
    cin >> age;

    cout << categories(age) << endl;

    return 0;
}
