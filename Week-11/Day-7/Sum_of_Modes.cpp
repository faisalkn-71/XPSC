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
        string s;
        cin>>s;
        ll diff = 0, ans = 0;
        unordered_map<ll, ll> mp;
        mp[0] = 1;
        for(int i=0; i<n; i++){
            if(s[i]=='0')
            diff--;
            else 
            diff++;
            if(mp[diff] > 0)
            ans = ans+mp[diff];
            mp[diff]++;
            
        }
        ans = ans+n*(n+1)/2;
        cout<<ans<<endl;
    }

    return 0;
}