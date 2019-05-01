#include <iostream>
#include <string>
using namespace std;

int main(){
    string inputstr;
    cin >> inputstr;
    string ssfound ("ss");
    
    if (inputstr.find(ssfound) != string::npos) {
        cout << "hiss"; 
    }
    else {
        cout << "no hiss";
    }
    return 0;
}