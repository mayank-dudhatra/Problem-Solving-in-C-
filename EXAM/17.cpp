// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

void checkArray(int arr[], int size, int &countpositive, int &countnegative){
    countpositive = 0;
    countnegative = 0;
    
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            countpositive++;
        }
        else if (arr[i]<0) {
            countnegative++;
        } 
    }
    cout << "Positive Count :- "<< countpositive << endl;
    cout << "Negative Count :- "<< countnegative << endl;
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
    
    int countpositive =0;
    int countnegative =0;
    
    checkArray(arr,size,countpositive,countnegative);
    
    return 0;
}

// Second Method

#include <iostream>
#include <string>
using namespace std;

void checkArray(int arr[], int size, int &countpositive, int &countnegative){
    countpositive = 0;
    countnegative = 0;
    
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            countpositive++;
        }
          
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            countnegative++;
        }
    }
    cout << "Positive Count :- "<< countpositive << endl;
    cout << "Negative Count :- "<< countnegative << endl;
}

 int main () {
    int size;
    cout << "Enter the Size of the Array :- ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the element of t he Array :- ";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    
    int countpositive =0;
    int countnegative =0;
    
    checkArray(arr,size,countpositive,countnegative);
    
    return 0;
}

// Third Method

#include <iostream>
#include <string>
using namespace std;

void checkArray(int arr[], int size, int &countpositive, int &countnegative){
    countpositive = 0;
    countnegative = 0;
    
    for(int i=0;i<size;i++){
     (arr[i]>0) ? countpositive++ : countnegative++;
    }
    cout << "Positive Count :- "<< countpositive << endl;
    cout << "Negative Count :- "<< countnegative << endl;
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
    
    int countpositive =0;
    int countnegative =0;
    
    checkArray(arr,size,countpositive,countnegative);
    
    return 0;
}
