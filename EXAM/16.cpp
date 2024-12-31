// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string  checkArray(int arr[], int size,int &countpositive,int &countnegative){
     countpositive =0;
     countnegative =0;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            countpositive++;
        } else if (arr[i] < 0) {
            countnegative++;
        }
    }
    
    if(countnegative == 0) {
        return "True";
    } 
    else {
        return "False";
    }
    
}



int main() {
    int size;
    cout << "Enter the Size of the Array :-";
    cin >> size;
    
    int arr[size];
    cout << "Enter the element of t he Array :-";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    int countpositive = 0, countnegative = 0;
    
    
    
   cout << "Result: " << checkArray(arr, size, countpositive, countnegative) << endl;
    
    
    return 0;
}




// Second Method


// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

bool checkArray(int arr[], int size){

     for(int i=0;i<size;i++){
         if (arr[i]<=0){
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
    
    if(checkArray(arr,size)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
   
    
    
    return 0;
}


// Third Method


#include <iostream>
#include <string>
using namespace std;

bool checkArray(int arr[], int size){
    bool allpositive = true;
    
     for(int i=0;i<size;i++){
         if (arr[i]<=0){
            allpositive = false;
         }
     }
     return allpositive;
    
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
    
    if(checkArray(arr,size)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
   
    
    
    return 0;
}