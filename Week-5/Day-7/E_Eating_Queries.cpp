#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr.rbegin(), arr.rend());

        vector<long long> prefix(n+1, 0);
        for(int i=0; i<n; i++)
            prefix[i+1] = prefix[i] + arr[i];

        while(q--) {
            long long x;
            cin >> x;
            int idx = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
            if(idx == n+1)
                cout << -1 << "\n";
            else
                cout << idx << "\n";
        }
    }

    return 0;
}
