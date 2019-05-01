#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int belowZero = 0;
    while (n--){
        int t; cin >> t;
        if (t<0){
            belowZero++;
        }
    }
    cout << belowZero;
    return 0;
}