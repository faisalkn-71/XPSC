#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> x(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long moves = 0;
    for(int i = 1; i < n; i++) {
        if(x[i] < x[i-1]) {
            moves += x[i-1] - x[i];
            x[i] = x[i-1];
        }
    }

    cout << moves << "\n";

    return 0;
}
