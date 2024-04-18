#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

bool isPal(ll n){
    string s="";
    while(n){
        ll x = n%10;
        char y = '0'+x;
        s+=y;
        n/=10;
    }
    string x = s;
    reverse(s.begin(), s.end());
    return x==s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> ara;
        unordered_map<ll, ll> mp;
        unordered_map<ll, ll> pal;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            ara.push_back(x);
        }
        ll x = binpow(2, 15)-1;
        for(ll i=0; i<x; i++){
            if(isPal(i)) pal[i]++;
        }
        ll ans = 0;
        for(ll i=0; i<n; i++){
            x = ara[i];
            mp[x]++;
            for(auto it:pal){
                ll z = it.first;
                ll xr = z^x;
                ans += mp[xr];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}