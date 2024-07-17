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
        string s;
        cin>>s;
        s="a"+s;
        ll ans = 0;
        for(ll i=n; i>=1; i--){
            if(s[i]!=s[i-1]) ans += i;
            else ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}