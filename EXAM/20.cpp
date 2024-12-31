#include <iostream>
using namespace std;

int findDifferenceSingleLoop(int arr[], int size) {
    
    int maxElement = arr[0];
    int minElement = arr[0];

    
    for (int i = 1; i < size; i++) {
        
        maxElement = (arr[i] > maxElement) ? arr[i] : maxElement;
        minElement = (arr[i] < minElement) ? arr[i] : minElement;
    }

    
    return maxElement - minElement;
}

int main() {
    
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]); 

   
    cout << "Difference (Single Loop): " << findDifferenceSingleLoop(arr, size) << endl;
    return 0;
}



// Second Method

#include <iostream>
using namespace std;

int findDifferenceSingleLoop(int arr[], int size) {
   
    int maxElement = arr[0];
    int minElement = arr[0];

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) { 
            maxElement = arr[i];
        }
        if (arr[i] < minElement) { 
            minElement = arr[i];
        }
    }

    
    return maxElement - minElement;
}

int main() {
    
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Difference (Single Loop): " << findDifferenceSingleLoop(arr, size) << endl;
    return 0;
}