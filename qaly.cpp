#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    double QALY = 0;
    
    for (int i = 0; i < N; i++){
        float q, y;
        cin >> q >> y;
        QALY += q * y;
    }
    cout << QALY;
    return 0;
}