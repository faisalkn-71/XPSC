#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n), b(n), c(n);
        vector<pair<ll, ll>> va, vb, vc;
        pair<ll, ll> bkp, bkp2;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            va.push_back({a[i], i});
        }
        for(ll i=0; i<n; i++){
            cin>>b[i];
            vb.push_back({b[i], i});
        }
        for(ll i=0; i<n; i++){
            cin>>c[i];
            vc.push_back({c[i], i});
        }
        sort(va.begin(), va.end(), greater<>());
        sort(vb.begin(), vb.end(), greater<>());
        sort(vc.begin(), vc.end(), greater<>());

        ll ans = 0;
        for(ll i=0; i<3; i++){
            for(ll j=0; j<3; j++){
                for(ll k=0; k<3; k++){
                    if(va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second){
                        ans = max(va[i].first + vb[j].first + vc[k].first, ans);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}