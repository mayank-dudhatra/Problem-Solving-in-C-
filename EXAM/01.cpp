#include <iostream>
#include <string>
using namespace std;

string Grade(int score) {
    if(score>=80 && score<=100){
        return "A";
    }
    else if(score>=60 && score<80){
        return "B";
    }
    else if(score>=40 && score<60){
        return "C";
    }
    else if(score>=20 && score<40){
        return "D";
    }
    else {
        return "E";
    }
}

int main() {
    
    int Score;
    cout << "Enter the Nunber between 0-100 :- ";
    cin >> Score;
    
    
    Grade(Score);

  cout << "Your Grade is :- " << Grade(Score) << endl;
    return 0;
}