#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        ll sum = 0;
        ll ans = 0;
        ll start = 0;

        for (ll i = 0; i < n; i++) {
            sum += a[i];
            while (sum > r) {
                sum -= a[start];
                start++;
            }
            if (sum >= l && sum <= r) {
                ans++;
                sum = 0;
                start = i + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
