// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int Average (int arr[], int size){
    int sum  =0;
    
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum/size;
}

int main() {
   
    
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    
     int arr[size];
    
    cout << "Enter the Number of arr :- ";
     for (int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }
    
    
    cout << "The Average of the Array is :-" << Average(arr,size) << endl;

    return 0;
}