#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string str;
    cin >> str;
    string firstLetter;
    firstLetter = str[0];
    for (int i = 1; i < str.length(); i++){
        if (isupper(str[i]) != 0){
            firstLetter += str[i];
        }
    }
    cout << firstLetter;
    return 0;
}