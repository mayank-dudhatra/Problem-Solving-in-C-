#include <iostream>
using namespace std;

void sum (int num, int &evensum, int &oddsum){
     evensum=0;
     oddsum=0;
    
    while(num>0){
        int digit = num%10;
        
        if(digit%2 == 0){
            evensum+=digit;
        }
        else{
            oddsum+=digit;
        }
        num/=10;
    }
}

int main() {
    int num;
    cout << "Enter the number :- ";
    cin >> num;
    
    int evensum, oddsum;
    sum(num, evensum, oddsum);
     cout << "Sum of even digits: " << evensum << endl;
    cout << "Sum of odd digits: " << oddsum << endl;

    return 0;
}
