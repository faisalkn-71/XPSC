#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

void solve(){
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), b(n);
    ll initial_damage = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        initial_damage += a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    if (initial_damage >= h) {
        cout << "1" << endl;
        return;
    }

    h -= initial_damage;

    ll l = 1, r = 1e12, ans = 0;
    while (l <= r) {
        ll mid = (l + r) / 2;
        ll total_damage = 0;

        for (ll i = 0; i < n; i++) {
            total_damage += (mid / b[i]) * a[i];
        }

        if (total_damage >= h) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans + 1 << endl; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
