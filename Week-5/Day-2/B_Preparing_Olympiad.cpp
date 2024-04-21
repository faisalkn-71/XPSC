#include<bits/stdc++.h>
using namespace std;

int n, l, r, x;
vector<int> c;
int ans = 0;

void solve(int idx, int sum, int minn, int maxx) {
    if (idx == n) {
        if (sum >= l && sum <= r && maxx - minn >= x) {
            ans++;
        }
        return;
    }
    solve(idx + 1, sum, minn, maxx);
    solve(idx + 1, sum + c[idx], min(minn, c[idx]), max(maxx, c[idx]));
}

int main() {
    cin >> n >> l >> r >> x;
    c.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    solve(0, 0, 1e9, 0);
    cout << ans << endl;
    return 0;
}
