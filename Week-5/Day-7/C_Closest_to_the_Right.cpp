#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    while(k--) {
        int q;
        cin >> q;
        int idx = lower_bound(arr.begin(), arr.end(), q) - arr.begin();
        if(idx == n)
            cout << n+1 << "\n";
        else
            cout << idx+1 << "\n";
    }
    return 0;
}
