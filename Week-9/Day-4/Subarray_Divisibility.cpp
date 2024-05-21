#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), pref(n+1, 0);
    unordered_map<long long, long long> cnt;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i+1] = (pref[i] + a[i]) % n;
        pref[i+1] = (pref[i+1] + n) % n;
    }
    long long res = 0;
    cnt[0] = 1;
    for(int i = 1; i <= n; i++) {
        res += cnt[pref[i]];
        cnt[pref[i]]++;
    }
    cout << res << "\n";
    return 0;
}
