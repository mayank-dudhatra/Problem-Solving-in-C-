#include <iostream>
using namespace std;

string repeatnumber(string str, int repeat){
    string ans = "";
    
    for(int i=1;i<=repeat;i++){
        ans+=str;
    }
    return ans;
}

int main() {
  string input;
  cout << "Enter the String :- ";
  cin >> input;
  
  int n;
 cout << "Enter the Number :- ";
 cin >> n;
 
 cout << repeatnumber(input, n) << endl;

    return 0;
}


// Second Method

