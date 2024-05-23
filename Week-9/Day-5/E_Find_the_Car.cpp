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
        ll n, k, q;
        cin>>n>>k>>q;
        vector<ll> a(k);
        for(ll i=0; i<k; i++){
            cin>>a[i];
        }
        vector<ll> b(k);
        for(ll i=0; i<k; i++){
            cin>>b[i];
        }

        for(ll i=0; i<q; i++){
            ll d;
            cin>>d;
            auto it = lower_bound(a.begin(), a.end(), d)-a.begin();
            it--;
            if(it==-1){
                ll dist = a[0];
                ll time = b[0];
                cout<<(d*time)/dist<<" ";
            }
            else{
                ll dist = a[it+1]-a[it];
                ll time = b[it+1]-b[it];
                cout<<((d-a[it]))*time/dist+b[it]<<" ";
            }
        }   
        cout<<endl;
        
    }

    return 0;
}