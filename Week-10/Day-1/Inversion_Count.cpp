#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> bit;

void update(int i, ll val) {
    for(; i < bit.size(); i += i&-i)
        bit[i] += val;
}

ll query(int i) {
    ll sum = 0;
    for(; i > 0; i -= i&-i)
        sum += bit[i];
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        vector<int> b = a;
        sort(b.begin(), b.end());
        for(int i=0; i<n; i++)
            a[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;

        bit.assign(n+1, 0);
        ll inversions = 0;
        for(int i=n-1; i>=0; i--) {
            inversions += query(a[i]-1);
            update(a[i], 1);
        }

        cout << inversions << "\n";
    }

    return 0;
}
