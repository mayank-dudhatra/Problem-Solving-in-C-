#include <iostream>
using namespace std;

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i-1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter the Number of Rows: ";
    cin >> row;

    pyramid(row);

    return 0;
}

//Second Method

#include <iostream>
using namespace std;

void pyramid(int n) {
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i+1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter the Number of Rows: ";
    cin >> row;

    pyramid(row);

    return 0;
}

// Third Method
#include <iostream>
using namespace std;

void pyramid(int n) {
    while(i<=n){
        
        int j=1;
        while(j<=n-1){
            cout << " ";
            j++;
        }
        
        int k=1;
        while (k <= 2 * i - 1) {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }

int main() {
    int row;
    cout << "Enter the Number of Rows: ";
    cin >> row;

    pyramid(row);

    return 0;
}
