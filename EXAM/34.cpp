// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void printFirstAndLast(int arr[], int size) {
    cout << "[" << arr[0] << ", " << arr[size - 1] << "]" << endl;
}


int main() {
    int size;
    cout << "Enter the size of Array :-";
    cin >> size;
    
    int arr[size];
    cout << "Enter the Number of Array :- ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    printFirstAndLast(arr, size);

     return 0;
};


// Second Method

#include <iostream>
using namespace std;


struct FirstLast {
    int first;
    int last;
};


FirstLast getFirstAndLast(int arr[], int size) {
    FirstLast result;
    result.first = arr[0];
    result.last = arr[size - 1];
    return result;
}

int main() {
   int size;
    cout << "Enter the size of Array :-";
    cin >> size;
    
    int arr[size];
    cout << "Enter the Number of Array :- ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    
    FirstLast result = getFirstAndLast(arr, size);

    
    cout << "[" << result.first << ", " << result.last << "]" << endl;

    return 0;
}




// Third Method


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void printFirstAndLast(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == size - 1) {
            cout << arr[i] << " ";
        }
    }
}


int main() {
    int size;
    cout << "Enter the size of Array :-";
    cin >> size;
    
    int arr[size];
    cout << "Enter the Number of Array :- ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    printFirstAndLast(arr, size);

    return 0;
}