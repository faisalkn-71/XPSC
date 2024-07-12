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
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        ll valA = 0, valB = 0;

        for(ll i=0; i<n; i++){
            if(a[i]==b[i]) continue;
            if(a[i]>b[i]) valA+=a[i];
            else valB+=b[i];
        }
        for(ll i=0; i<n; i++){
            if(a[i] != b[i]) continue;
            if(a[i]==-1){
                if(valA<valB) valB+=b[i];
                else valA += a[i];
            }
            else{
                if(valA>valB) valB+=b[i];
                else valA += a[i];
            }
        }
        cout<<min(valA, valB)<<endl;
    }

    return 0;
}