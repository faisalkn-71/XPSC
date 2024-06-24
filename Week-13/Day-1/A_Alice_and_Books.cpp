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
        vector<int> vec(n);
        for(int i=0;i<n; i++) cin>> vec[i];
        int ans = vec[n-1];
        int mx = -1;
        for(int i=0; i<n-1; i++){
            mx = max(mx, vec[i]);
        }
        ans += mx; 
        cout<<ans<<endl;
    }

    return 0;
}