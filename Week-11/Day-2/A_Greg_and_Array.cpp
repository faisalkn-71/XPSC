#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<int> l(m + 1), r(m + 1);
    vector<ll> d(m + 1);

    for (int i = 1; i <= m; ++i) {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<ll> operation_apply(m + 2, 0);

    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        operation_apply[x]++;
        if (y + 1 <= m) {
            operation_apply[y + 1]--;
        }
    }

    for (int i = 1; i <= m; ++i) {
        operation_apply[i] += operation_apply[i - 1];
    }

    vector<ll> delta(n + 2, 0);

    for (int i = 1; i <= m; ++i) {
        if (operation_apply[i] > 0) {
            delta[l[i]] += d[i] * operation_apply[i];
            if (r[i] + 1 <= n) {
                delta[r[i] + 1] -= d[i] * operation_apply[i];
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        delta[i] += delta[i - 1];
        a[i] += delta[i];
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
