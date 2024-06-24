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
        ll n, a, b;
        cin>>n>>a>>b;
        ll ans =0;
        if(a>=b) ans = n*a;
        else{
            ll diff = b-a;
            if(diff<=n){
                ans =  (b*diff)-(diff*(diff-1))/2;
                n=n-diff;
                ans += n*a;
            }
            else{
                diff = n;
                ans = (b*diff) - (diff*(diff-1))/2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}