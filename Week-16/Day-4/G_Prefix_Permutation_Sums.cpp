#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n-1);
    for(ll i=0; i<n-1; i++){
        cin>>a[i];
    }

    ll k = n*(n+1)/2;
    for(ll i=0; i<n-1; i++){
        if(a[i]>k){
            cout<<"NO"<<endl;
            return;
        }
    }
    a.insert(a.begin(), 0);

    vector<ll> ara;
    for(ll i=1; i<n; i++){
        ara.push_back(a[i]-a[i-1]); 
    }

    set<ll> st;
    for(ll i=1; i<n+1; i++){
        st.insert(i);
    }

    ll d=-1;
    for(ll i=0; i<ara.size(); i++){
        if(ara[i]<=n && st.count(ara[i])){
            st.erase(ara[i]);
        }
        else{
            if(d!=-1){
                cout<<"NO"<<endl;
                return;
            }
            d=ara[i];
        }
    }

    if(d==-1){
        cout<<"YES"<<endl;
        return;
    }

    for(auto i:st){
        d-=i;
    }

    if(d==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}