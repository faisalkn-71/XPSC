#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;
vector<ll> a;

bool check(ll mid) {
    ll cnt = 0, sum = 0;
    for (ll i = 0; i < n; i++) {
        if (sum + a[i] > mid) {
            cnt++;
            sum = a[i];
        } else {
            sum += a[i];
        }
    }
    return cnt < k;
}

int main() {
    cin >> n >> k;
    a.resize(n);
    ll l = 0, r = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        r += a[i];
        l = max(l, a[i]);
    }
    while (l < r) {
        ll mid = (l + r) / 2;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
}
