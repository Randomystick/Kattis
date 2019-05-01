#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int diffOne = B - A;
    int diffTwo = C - B;
    int ans;
    if (diffTwo > diffOne) {
        // move forward
        ans = C - B - 1;
    }
    else if (diffOne > diffTwo) {
        // move backward
        ans = B - A - 1;
    }
    else ans = B - A - 1;
    cout << ans;
    return 0;
}