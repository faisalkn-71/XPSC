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
        int n, q;
        cin>>n>>q;
        vector<ll> ara(n+1, 0);
        for(int i=1; i<=n; i++){
            cin>>ara[i];
        }
        vector<ll> pref(n+1, 0);
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + ara[i];
        }
        while(q--){
            ll l, r, k;
            cin>>l>>r>>k;
            ll sum = pref[n];
            sum -= (pref[r] - pref[l-1]);
            sum += ((r-l+1LL)*k);
            if(sum%2LL==1LL) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}