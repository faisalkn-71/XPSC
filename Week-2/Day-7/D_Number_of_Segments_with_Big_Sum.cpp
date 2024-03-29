#include<bits/stdc++.h>
using namespace std;

long long numberOfGoodSegments(vector<int>& arr, int n, long long s) {
    vector<long long> prefixSum(n+1, 0);
    for(int i = 0; i < n; i++) {
        prefixSum[i+1] = prefixSum[i] + arr[i];
    }

    long long count = 0;
    for(int i = 0; i < n; i++) {
        auto it = lower_bound(prefixSum.begin()+i, prefixSum.end(), s + prefixSum[i]);
        count += prefixSum.end() - it;
    }

    return count;
}

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<int> ara(n);
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    cout << numberOfGoodSegments(ara, n, s) << endl;
    return 0;
}
