#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll MOD = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll ans=0, pow=1;
        for(ll i=0; i<31; i++){
            if(k & (1<<i)){
                ans += pow;
                ans%=MOD;
            }
            pow*=n;
            pow%=MOD;
        }
        cout<<ans<<endl;
    }

    return 0;
}