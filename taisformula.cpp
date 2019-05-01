#include <iostream>
#include <iomanip>
#include <fstream>
#include<vector>
using namespace std;


long double maintwo() {
    int N = 0; cin >> N; 
    vector<long double> time(N);
    vector<double>         volume(N);
    vector<double> area(N - 1);
    long double totalArea = 0;
    for (int i = 0; i < N; i++) {
        cin >> time[i]; cin >> volume[i];
        //cout << time[i] << "\n";
        //cout << volume[i] << "\n";
    }

    for (int j = 0; j < (N - 1); j++) {
        area[j] = (time[j] - time[j + 1]) * (volume[j] + volume[j + 1]) * 0.5 * 0.001;
        if (area[j] < 0) { area[j] = -area[j]; }
        totalArea += area[j];
    }
    return totalArea;
}


int main() {
    long double totalArea = maintwo();
    cout << setprecision(10) << totalArea;
}