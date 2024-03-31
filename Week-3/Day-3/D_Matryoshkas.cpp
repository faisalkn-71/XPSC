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
        int ara[n+5];
        map<int, int> mp;
        for(int i=1; i<=n; i++){
            cin>>ara[i];
            mp[ara[i]]++;
        }
        sort(ara+1, ara+n+1);
        int ans = 0;
        for(int i=1; i<=n; i++){
            int val = ara[i];
            if(mp[ara[i]]!=0){
                ans++;
                while(mp[val]>0){
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;    
    }

    return 0;
}