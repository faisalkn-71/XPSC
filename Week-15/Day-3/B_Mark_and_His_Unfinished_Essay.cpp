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
        int n, c, q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    vector<pair<ll, ll>> op(c);
    vector<pair<ll, ll>> seg(c);
    ll cur = n;

    for(int i=0; i<c; i++){
        ll l, r;
        cin>>l>>r;
        op[i] = {l, r};
        seg[i] = {cur+1, cur+(r-l+1)};
        cur = seg[i].second;
    }

    while(q--){
        ll k;
        cin>>k;
        if(k<=n){
            cout<<s[k-1]<<endl;
            continue;
        }
        for(int i=c-1; i>=0; i--){
            if(k>=seg[i].first && k<=seg[i].second){
                k=(op[i].first) + (k-seg[i].first);
            }
        }
        cout<<s[k-1]<<endl;
    }

    }

    return 0;
}