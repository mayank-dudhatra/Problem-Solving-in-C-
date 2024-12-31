#include <iostream>
#include <string>    
using namespace std;

string CheckLogin(string inputUsername, string inputPassword){
    string correctUsername = "admin";
    string correctPassword = "1234";
    
    if (inputUsername == correctUsername && inputPassword == correctPassword){
        return "Login Successful";
    }
    else{
        return "Login Failed";
    }
}

int main() {
    string username, password;
    
    cout << "Enter Username :- ";
    cin >> username;
    
    cout << "Enter Password :- ";
    cin >> password;
    

    cout << CheckLogin(username, password) << endl;
    
    return 0;
}
