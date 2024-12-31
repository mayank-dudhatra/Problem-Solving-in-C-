// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;
 void CountOddEven(int arr[], int size, int &evencount, int &oddcount){
      evencount = 0;
      oddcount = 0;
     
     for(int i=0;i<size;i++){
         if (arr[i] % 2 == 0){
             evencount++;
         }
         else {
             oddcount++;
         }
     }
   
 
 }

int main() {
   
   int size;
   cout << "Enter the Length of Array :- ";
   cin >> size;
   
   int arr[size];
   cout << "Enter the Element of Array :- ";
  for(int i=0;i<size;i++){
      cin >> arr[i];
  }
  
    int evencount = 0, oddcount = 0;
  CountOddEven(arr, size, evencount, oddcount);

  
  cout << "Even :-" << evencount << " Odd :-" << oddcount << endl;
   

    return 0;
}