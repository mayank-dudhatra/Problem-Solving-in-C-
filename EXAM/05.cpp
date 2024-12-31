// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

string CheckVote (int age){
    if (age >= 18){
        return "You are eligible to vote";
    }
    else {
        return "You are not eligible to vote";
    }
}


int main() {
    int Age;
    cout << "Enter your Age :- ";
    cin >> Age;
    
    cout << CheckVote(Age) << endl;
    return 0;
}