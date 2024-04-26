#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int k;
    cin >> k;
    while(k--) {
        int l, r;
        cin >> l >> r;
        int left = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
        int right = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
        cout << right - left << " ";
    }
    cout<<endl;

    return 0;
}
