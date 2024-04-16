#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> x(m+1);
    for(int i=0; i<=m; i++)
        cin >> x[i];

    int friends = 0;
    for(int i=0; i<m; i++) {
        int diff = x[i]^x[m];
        if(__builtin_popcount(diff) <= k)
            friends++;
    }

    cout << friends << endl;
    return 0;
}
