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
        ll ara[n];
        for(ll i=0; i<n; i++){
            cin>>ara[i];
        }

        ll bits[30] = {0};
        for(ll i=0; i<n; i++){
            ll ele = ara[i];
            ll p  = 0;
            while(ele>0){
                bits[p] += ele%2;
                p++;
                ele/=2;
            }
        }
        ll ans = 0;
        for(ll i=0; i<30; i++){
            if(bits[i]%2!=0) ans += (1 << i);
        }

        for(ll i=0; i<n; i++){
            ll ele = ara[i];
            ll p  = 0;
            while(ele>0){
                bits[p] -= ele%2;
                p++;
                ele/=2;
            }
            ll cur = 0;
            for(ll j=0; j<30; j++){
                if(bits[j]%2!=0) cur += (1 << j);
            }

            ans = min(ans, cur);

            ele = ara[i];
            p  = 0;
            while(ele>0){
                bits[p] += ele%2;
                p++;
                ele/=2;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}