#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n), b(n+1);
        for(ll i=0;  i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<=n; i++){
            cin>>b[i];
        }

        ll total = 0;
        for(ll i=0;i<n; i++){
            total += abs(a[i]-b[i]);
        }
        total++;
        ll minn = INT_MAX;
        for(ll i=0; i<n; i++){
            minn = min(minn, min(abs(b[n]-b[i]), abs(b[n]-a[i])));
            ll x = min(a[i], b[i]);
            ll y = max(a[i], b[i]);
            if(b[n]>=x && b[n]<=y){
                minn = 0;
            }
        }
        total += minn;

        cout<<total<<endl;
    }

    return 0;
}