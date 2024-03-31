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
        vector<ll> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        ll ans = 0;
        priority_queue<ll> pq;
        for(int i=0; i<n; i++){
            if(ara[i]==0){
                    if(pq.empty()) continue;
                    ans+=pq.top();
                    pq.pop();
            }
            else{
                pq.push(ara[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}