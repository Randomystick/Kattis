#include <iostream>
using namespace std;

int main (){
    int king = 1;
    int queen = 1;
    int rooks = 2;
    int bishops = 2;
    int knights = 2;
    int pawns = 8;
    
    int k,q,r,b,kn,p;
    cin >> k >> q >> r >> b >> kn >> p;
    cout << king - k << " " << queen - q << " " << rooks - r << " " << bishops - b << " " << knights - kn << " " << pawns - p << endl;
}