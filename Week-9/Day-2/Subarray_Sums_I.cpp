#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    map<long long, long long> counts;
    long long sum = 0;
    long long res = 0;
    counts[0]++;
    for(int i=0; i<n; i++) {
        sum += a[i];
        res += counts[sum - x];
        counts[sum]++;
    }
    cout << res;
    return 0;
}
