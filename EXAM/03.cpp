// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

string Triangle (int a, int b, int c){
    if (a == b && b == c ){
        return "It is a Equilateral Traingle";
    }
    else if (a==b || b==c || c==a ){
        return "It is a Isosceles Traingle";
    }
    else{
        return "It is a Scalene Traingle";
    }
}

int main() {
    
    int a ,b ,c;
    cout << "Enter the value of First Side :- ";
    cin >> a;
    
    cout << "Enter the value of Second Side :- ";
    cin >> b;
    
    cout << "Enter the value of Third Side :- ";
    cin >> c;
   
   cout << Triangle(a,b,c) << endl;
    return 0;
}