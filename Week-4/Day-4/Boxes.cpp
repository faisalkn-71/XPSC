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
        sort(ara.begin(), ara.end());
        priority_queue<ll> pq;
        pq.push(ara[n-1]);
        for(int i=n-2; i>=0; i--){
            if(pq.top()>=ara[i]){
                ll x = pq.top() ^ ara[i];
                pq.pop();
                pq.push(x);
            }
            else pq.push(ara[i]);
        }
        cout<<pq.size()<<endl;
    }

    return 0;
}