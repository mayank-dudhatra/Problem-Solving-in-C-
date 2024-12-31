#include <iostream>
#include <string>
using namespace std;

void evenindex(int arr[], int size){
    cout << "[";
    for(int i=0;i<size;i++){
        if(i % 2 == 0){
            cout << arr[i];
            if(i< size -2){
                cout << ",";
            }
        }
    }
    cout << "]" << endl;
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
    
    evenindex(arr,size);
    
    return 0;
}



// Second Method


#include <iostream>
#include <string>
using namespace std;

void evenindex(int arr[], int size){
    cout << "[";
    for(int i=0;i<size;i+=2){
        
            cout << arr[i];
            if(i< size -2){
                cout << ",";
            }
        
    }
    cout << "]" << endl;
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
    
    evenindex(arr,size);
    
    return 0;
}