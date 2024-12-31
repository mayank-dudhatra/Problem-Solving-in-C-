
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    bool found = false;

  
    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            found = true;
            break;  
        }
    }

    
    cout << (found ? "true" : "false") << endl;

    return 0;
}


// Second Method 

#include <iostream>
using namespace std;

bool contains(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

   
    cout << (contains(arr, size, target) ? "true" : "false") << endl;

    return 0;
}
