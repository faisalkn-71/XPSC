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
        ll n, k, q;
        cin>>n>>k>>q;
        vector<ll> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        ll ans = 0;
        ll cons = 0;
        for(int i=0; i<n; i++){
            if(ara[i]<=q){
                cons++;
                if(i==n-1 || ara[i+1]>q){
                    if(cons>=k){
                        ll x = cons-k+1LL;
                        ll add = (x*(x+1LL))/2LL;
                        ans+=add;
                    }
                    cons=0;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}