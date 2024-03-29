#include<bits/stdc++.h>
using namespace std;

int shortestGoodSegment(vector<int>& arr, int n, long long s) {
    long long sum = 0;
    int len = n + 1;
    int start = 0, end = 0;

    while (end < n) {
        while (sum < s && end < n)
            sum += arr[end++];

        while (sum >= s && start < n) {
            if (end - start < len)
                len = end - start;

            sum -= arr[start++];
        }
    }

    if (len == n + 1)
        return -1;
    else
        return len;
}

int main() {
    int n;
    long long s;
    cin>>n>>s;
    vector<int> ara(n);
    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    cout << shortestGoodSegment(ara, n, s) << endl;
    return 0;
}
