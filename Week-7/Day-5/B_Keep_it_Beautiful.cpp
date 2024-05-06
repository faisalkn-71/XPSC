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
        ll n;
        cin>>n;
        vector<ll> ara(n);
        for(ll i=0; i<n; i++){
            cin>>ara[i];
        }
        vector<ll> ans;
        ll cur = ara[0];
        ans.push_back(1);
        bool flag = true;
        bool first = true;
        for(int i=1; i<n; i++){
            if(cur<=ara[i] && flag==true){
                ans.push_back(1);
                cur = ara[i];
            }
            else if(ara[i]<=ara[0] && (cur<=ara[i] || first==true)){
                ans.push_back(1);
                cur = ara[i];
                first = false;
                flag = false;
            }
            else{
                ans.push_back(0);
            }
        }
        for(auto x:ans){
            cout<<x;
        }
        cout<<endl;
    }

    return 0;
}