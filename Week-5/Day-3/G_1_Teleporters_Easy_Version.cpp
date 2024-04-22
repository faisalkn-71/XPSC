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
    ll c; 
    cin>>c;
    vector<ll> ara(n);
    for(int i=0; i<n; i++){
        cin>>ara[i];
        ara[i]+=(i+1);
    }

    sort(ara.begin(), ara.end());
    int ans = 0;
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(sum+ara[i] > c) break;
        sum +=  ara[i];
        ans++;
    }
    cout<<ans<<endl;


    }


    return 0;
}