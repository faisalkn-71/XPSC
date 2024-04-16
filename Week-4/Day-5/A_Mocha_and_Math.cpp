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
        vector<int> ara(n, 0);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        int ans = ara[0];
        for(int i=1; i<n; i++){
            ans = ans & ara[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}