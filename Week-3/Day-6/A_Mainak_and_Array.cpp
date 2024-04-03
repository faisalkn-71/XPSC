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
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int ans = ara[n-1] - ara[0];
        for(int i=1; i<=n-1; i++){
            ans = max(ans, ara[i]-ara[0]);
        }
        for(int i=0; i<=n-2; i++){
            ans = max(ans, ara[n-1]-ara[i]);
        }
        for(int i=1; i<=n-1; i++){
            ans = max(ans, ara[i-1]-ara[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}