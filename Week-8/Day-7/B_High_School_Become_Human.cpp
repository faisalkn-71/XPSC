#include <bits/stdc++.h>
using namespace std;

int main() {
    long double x, y;
    cin >> x >> y;
    long double logX = y * log10(x);
    long double logY = x * log10(y);
    if (logX < logY) {
        cout << "<";
    } else if (logX > logY) {
        cout << ">";
    } else {
        cout << "=";
    }
    return 0;
}
