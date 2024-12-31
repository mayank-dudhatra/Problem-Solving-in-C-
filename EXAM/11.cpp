#include <iostream>
#include <string>

using namespace std;


int removeDuplicates(int arr[], int size, int result[]) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < index; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }
       
        if (!isDuplicate) {
            result[index++] = arr[i];
        }
    }

    return index; 
}

int main() {
    int size;
    cout << "Enter the Length of Array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result[size]; 
    int newSize = removeDuplicates(arr, size, result);

    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
