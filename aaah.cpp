#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string ableSay;
    cin >> ableSay;
    int ableLength;
    ableLength = ableSay.length();
    
    string mustSay;
    cin >> mustSay;
    int mustLength = mustSay.length();
    if (mustLength > ableLength) {
        cout << "no";
    }
    else {
        cout << "go";
    }
    return 0;
}