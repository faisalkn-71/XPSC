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
        int n; cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        } 

        vector<ll> freq(n+2, 0);
        for(int i=0; i<n; i++){
            if(a[i]>n) continue;
            freq[a[i]]++;
        }

        ll ans = 0;
        for(int i=1; i<=n; i++){
            ll h=0;
            for(ll x=1; x*x<=i; x++){
                if(i%x==0){
                    h+=freq[x];
                    if(x*x!=i){
                        h+=freq[i/x];
                    }
                }
            }
            ans = max(ans, h);
        }
        cout<<ans<<endl;    
    }

    return 0;
}