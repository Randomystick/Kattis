#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        if (k % 2 == 0){
            cout << k << " is even" << endl;
        }
        else {
            cout << k << " is odd" << endl;
        }
    }
    return 0;
}