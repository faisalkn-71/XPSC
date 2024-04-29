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
        ll n, k;
        cin>>n>>k;
        vector<ll> ara(k);
        for(int i=0; i<k; i++) cin>>ara[i];
        sort(ara.rbegin(), ara.rend());
        ll total=0, pos = 0;
        for(int i=0; i<k; i++){
            if(pos<ara[i]){
                pos += (n-ara[i]);
                total++;
            }
            else break; 
        }
        cout<<total<<endl;
    }

    return 0;
}