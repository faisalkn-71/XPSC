#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> prefix(n+1, 0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        prefix[i+1] = prefix[i] + a[i];
    }

    int m;
    cin >> m;
    while(m--) {
        int x;
        cin >> x;
        int pile = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
        cout << pile << "\n";
    }

    return 0;
}
