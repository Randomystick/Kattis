#include <iostream>
using namespace std;

int main(){
    int i; cin >> i;
    for (int k = 0; k < i; k++){
        int j; cin >> j;
        int ans = j / 400;
        if (j % 400 != 0){
            ++ans;
        }
        cout << ans << endl;
    }
}