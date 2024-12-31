// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string extension( string filename){
    int pos = filename.rfind('.');
    cout << "Pos" << pos << endl;
    return filename.substr(pos+1);
}

int main() {
   string filename = "document.pdf";
   
   cout << "File Extension :- " << extension(filename) << endl;
   
    return 0;
}


// Second Method 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string extension( string filename){
    int pos = filename.find_last_of('.');
    cout << "Pos" << pos << endl;
    return filename.substr(pos+1);
}

int main() {
   string filename = "document.pdf";
   
   cout << "File Extension :- " << extension(filename) << endl;
   
    return 0;
}