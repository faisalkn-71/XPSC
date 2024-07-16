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
        int n;
        cin>>n;
        vector<ll> a(n), b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        ll ans = 0;

        for(int i=0; i<n; i++){
            if(i==n-1){
                ans += a[i];
                break;
            }
            if(a[i]+(a[i+1]+b[i])<=a[i+1]+(a[i]+b[i+1])){
                ans += a[i];
                a[i+1]+=b[i];
            }
            else{
                ans += a[i+1];
                a[i] += b[i+1];
                swap(a[i+1], a[i]);
                swap(b[i+1], b[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}