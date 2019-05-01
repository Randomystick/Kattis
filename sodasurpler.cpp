#include <iostream>
using namespace std;

int main(){
    int e; int f; int c;
    cin >> e >> f >> c;
    int ans = 0;
    e += f;
    do {
        ans += e/c;
        e = e/c + e%c;
    } while (e>=c);
    cout << ans;
    return 0;
}