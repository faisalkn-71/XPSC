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
        int idx = upper_bound(arr.begin(), arr.end(), q) - arr.begin();
        if(idx == 0)
            cout << 0 << "\n";
        else
            cout << idx << "\n";
    }
    return 0;
}
