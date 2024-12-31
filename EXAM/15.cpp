#include <iostream>
using namespace std;

void removeLast(int arr[], int size) {
    int newArr[size - 1];  
   

    for (int i = 0; i < size ; i++) {
        newArr[i] = arr[i];
    }

    
    for (int i = 0; i < size -1; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeLast(arr, size);  
    return 0;
}