#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m; 
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        ll ans = INT_MAX;
        for(int i=0; i<n; i++){
            string s = v[i];
            for(int j=i+1; j<n; j++){
                string st = v[j];
                ll res = 0;
                for(int x=0; x<m; x++){
                    res += abs(st[x]-s[x]);
                }
                ans= min(res, ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}