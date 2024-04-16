#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    vector<vector<bool>> dp(n+1, vector<bool>(360, false));
    dp[0][0] = true;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<360; j++) {
            dp[i][j] = dp[i-1][(j-a[i-1]+360)%360] | dp[i-1][(j+a[i-1])%360];
        }
    }

    if(dp[n][0]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
