#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char * snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double []);
void show(const double []);
int main() {
    double expenses[4];
    fill(expenses);
    show(expenses);
    return 0;
}
void fill(double pa[]) {
    for (int i = 0; i < Seasons; i++) {
        cout << snames[i] << "에 소요되는 비용: ";
        cin >> pa[i];
    }
}
void show(const double da[]) {
    double total = 0.0;
    cout << "\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++) {
        cout << snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    cout << "총비용: $" << total << '\n';
}
