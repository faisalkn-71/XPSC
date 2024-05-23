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
        int cnt[n+1] = {};
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        int id = -1;
        for(int i=0; i<=n; i++){
            if(cnt[i]==1){
                id = i;
                break;
            }
        }
        int ans = n;
        for(int i=0; i<n; i++){
            if(cnt[i]==0){
                ans = i;
                break;
            }
            if(i == id) continue;
            else if(cnt[i]==1){
                ans = i;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}