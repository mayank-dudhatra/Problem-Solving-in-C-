#include <iostream>
using namespace std;

void targetpair(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { 
            if (arr[i] + arr[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the Array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    cout << "Target pairs (indices):" << endl;
    targetpair(arr, size, target);

    return 0;
}
