#include <iostream>
#include <string>    
using namespace std;

string TraficLight(string light){
    
    if (light == "red" ){
        return "Stop";
    }
    else if (light == "yellow"){
        return "Slow Down";
    }
    else if (light == "green"){
        return "Go";
    }
    else{
        return "Invalid Color";
    }
}


int main() {
   string Lightcolor;
   
   cout << "Enter The Color of Light";
   cin >> Lightcolor;
   
   cout << TraficLight(Lightcolor) << endl;
    
    return 0;
}
