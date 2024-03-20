#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ara[n+3];
        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }
        ll ans = ara[1]-1;
        ll idx = ans;
        for(int i=2; i<=n; i++){
            if(idx+i < ara[i]){
                ll cnt = ara[i] - (idx+i);
                idx+=cnt;
                ans+=cnt;
            }
        }
        cout<<ans<<"\n";

    }

    return 0;
}