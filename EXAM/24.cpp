#include <iostream>
#include <cctype> 
using namespace std;


string trimManual(string str) {
    int start = 0, end = str.length() - 1;

    
    while (start <= end && isspace(str[start])) {
        start++;
    }

    
    while (end >= start && isspace(str[end])) {
        end--;
    }

   
    return str.substr(start, end - start + 1);
}
int main() {
    string input = "   hello   ";
    cout << "Trimmed String (Manual): \"" << trimManual(input) << "\"" << endl;
    return 0;
}
