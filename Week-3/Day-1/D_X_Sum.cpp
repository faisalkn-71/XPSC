#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll cell(int i, int j, int n, int m, vector<vector<int>>& ara){
    ll res = 0;
    int idx = 0;
    while(i-idx>-1 && j-idx>-1){
        res+=ara[i-idx][j-idx];
        idx++;
    }
    idx=0;
    while(i-idx>-1 && j+idx<m){
        res += ara[i-idx][j+idx];
        idx++;
    }
    idx=0;
    while(i+idx<n && j+idx<m){
        res += ara[i+idx][j+idx];
        idx++;
    }
    idx=0;
    while(i+idx<n && j-idx>-1){
        res += ara[i+idx][j-idx];
        idx++;
    }

    return res-3*(ara[i][j]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        // int ara[n][m];
        vector<vector<int>> ara(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>ara[i][j];
            }
        }
        ll ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans = max(ans, cell(i, j, n, m, ara));
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}