// Second Question

#include <iostream>
#include <string>
using namespace std;

bool checknumber(int arr[], int size){

    for(int i =0;i<size;i++){
        if (arr[i]>0){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    if(checknumber(arr,size)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}


// Second Method 

#include <iostream>
#include <string>
using namespace std;

bool checknumber(int arr[], int size){
  bool positive = true;
    for(int i =0;i<size;i++){
        if (arr[i]<0){
            positive = false;
        }
    }
    return positive;
}

int main(){
    int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    if(checknumber(arr,size)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}

// THIRD METHOD

#include <iostream>
#include <string>
using namespace std;

bool checknumber(int arr[], int size){

    for(int i =0;i<size;i++){
        return  (arr[i]>0) ? true : false;
    }
}

int main(){
    int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    if(checknumber(arr,size)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}

// Fourth Method 

#include <iostream>
#include <string>
using namespace std;

bool checknumber(int arr[], int size){

    for(int i =0;i<size;i++){
        if (arr[i]>0){
            return true;
        }
    }

     for(int i =0;i<size;i++){
        if (arr[i]<0){
            return false;
        }
    }

}

int main(){
    int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    if(checknumber(arr,size)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

}


// First Question

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {4, 2, 8, 5, 1};

    std::sort(nums.begin(), nums.end());

   
    std::cout << "Sorted Array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


// Second Method

#include <iostream>
using namespace std;

void Array(int arr[],int size){
     
    return sort(arr, arr + size);
  
}
int main() {
  int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    Array(arr,size);

    for (int i = 0; i < size; i++){
       cout << arr[i] << endl;
    }
    
}

// Third Method

#include <iostream>


int main() {
  int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    sort(arr, arr + size);

    for (int i = 0; i < size; i++){
       cout << arr[i] << endl;
    }
    
}

// Third Question 

#include <iostream>
#include <string>
using namespace std;

void countpositivenegative(int arr[], int size){
   int countpositive=0;
   int countnegative=0;

    for(int i=0;i<size;i++){
        if (arr[i]>0)
        {
            countpositive++;
        }
        else
        {
            countnegative++;
        }
    }
    cout << "Positive Count" << countpositive << "Negative Count" << countnegative << endl;
}

int main() {
     int size;
    cout << "Enter the length of the Array";
    cin >> size;

    int arr[size];
    cout << "Enter the Number of Array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    } 

     countpositivenegative(arr,size) ;
    
}

// Second Method


#include <iostream>
#include <string>
using namespace std;

void checkArray(int arr[], int size, int &countpositive, int &countnegative){
    countpositive = 0;
    countnegative = 0;
    
   for(int i=0;i<size;i++){
     (arr[i]>0) ? countpositive++ : countnegative++ ;
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


// Fourth Method


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
         else{
            countnegative++;
         } 
    
    cout << "Positive Count :- "<< countpositive << endl;
    cout << "Negative Count :- "<< countnegative << endl;
}
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



// Fourth Question 

#include <iostream>
#include <string>
using namespace std;

int design(int number){
   number =  1;
   for(int i=1;i<=4;i++){
    for(int j=1;j<=3;j++){
        number++;
        cout << number ;
    }
   }
}
int main(){
    int number=1;

        design(number);
}

// Second Method

#include <iostream>
#include <string>
using namespace std;

int design(){

    for(int i=1;i<=3;i++){
        cout << i << endl;
    }

    for(int j=4;j<=6;j++){
        cout << j << endl;
    }

    for(int k=7;k<=9;k++){
        cout << k << endl;
    }
} 

int main() {
   cout << design() << endl;
}
