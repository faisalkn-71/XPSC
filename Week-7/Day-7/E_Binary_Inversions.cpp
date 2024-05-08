#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll invCnt(vector<ll> a, ll n){
    ll res = 0, one=0;
    for(ll i=0; i<n; i++){
        if(a[i]==1){
            one++;
        }
        else{
            res+=one;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> ara(n);
        for(ll i=0; i<n; i++){
            cin>>ara[i];
        }
        ll ans = invCnt(ara, n);
        ll id = -1;
        for(ll i=0; i<n; i++){
            if(ara[i]==0){
                ara[i]=1;
                id = 1;
                break;
            }
        }
        ans = max(ans, invCnt(ara, n));
        if(id!=-1){
            ara[id] = 0;
        }
        for(ll i=n-1; i>=0; i--){
            if(ara[i]==1){
                ara[i]=0;
                break;
            }
        }
        ans = max(ans, invCnt(ara, n));
        cout<<ans<<endl;
    }

    return 0;
}