// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

bool checkorder(int arr[], int size){
    
    for ( int i=0;i<size;i++){
        if (arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the Size of the Array :- ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the element of t he Array :- ";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    if(checkorder(arr,size)){
        cout << "True" << endl;
    }
    else{
         cout << "False" << endl;
    }
    
    return 0;
}