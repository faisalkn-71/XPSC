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
        ll n, water, l = 1, r=0;
        cin>>n>>water;
        vector<ll> ht(n);
        for(ll i=0; i<n; i++){
            cin>>ht[i];
        }
        r=1e10;

        while(l<r-1){
            ll total = 0;
            ll mid = l+(r-l)/2;
            for(ll i=0; i<n; i++){
                if(ht[i]<mid){
                    total += (mid-ht[i]);
                }
            }
            if(total>water) r = mid;
            else l = mid;
        }

        cout<<l<<endl;

    }

    return 0;
}