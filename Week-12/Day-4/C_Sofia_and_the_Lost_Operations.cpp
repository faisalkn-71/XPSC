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
        ll a[n+3], b[n+3];
        multiset<ll> mul;
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++){
            cin>>b[i];
            if(a[i]!=b[i]) mul.insert(b[i]);
        }

        bool found = 0;
        ll m;
        cin>>m;
        ll d[m+3];
        for(int i=1; i<=m; i++) cin>>d[i];
        for(int i=1; i<=n; i++){
            if(b[i]==d[m]) found=1;
        }
        if(!found){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=m; i>=1; i--){
            ll x=d[i];
            if(mul.find(x) != mul.end()) mul.erase(mul.find(x));
        }
        if(!mul.empty()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}