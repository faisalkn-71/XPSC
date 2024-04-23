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
        ll n; 
        cin>>n;
        ll m = (n*(n-1)) / 2;
        vector<ll> v;
        ll maxx = INT_MIN;
        for(ll i=0; i<m; i++){
            ll x;
            cin>>x;
            v.push_back(x);
            maxx = max(maxx, x);
        }
        sort(v.begin(), v.end());
        for(ll i=0; i<m; i+=n){
            cout<<v[i]<<" ";
            n--;
        }
        cout<<maxx<<endl;
    }

    return 0;
}