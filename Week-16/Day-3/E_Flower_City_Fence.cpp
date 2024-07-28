#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
void solve(){
            ll n;
        cin>>n;
        vector<ll> v(n+1);
        map<ll, ll> mp1, mp2;
        for(ll i=1; i<=n; i++){
            ll x;
            cin>>x;
            v[i] = x;
            mp1[i] = x;
            mp2[x] = i;
        }

        for(ll i=1; i<=n; i++){
            ll t = v[i];
            ll l = mp1[t];
            ll u = mp2[l];
            if(t!=u){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}