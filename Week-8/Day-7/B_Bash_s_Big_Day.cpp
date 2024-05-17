#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll> ara(n);
    ll maxx = 0;
    for(ll i=0; i<n; i++){
        cin>>ara[i];
        if(ara[i]>maxx){
            maxx = ara[i];
        }
    }
    vector<ll> freq(maxx+1, 0);
    for(ll a:ara){
        freq[a]++;
    }

    ll maxxPoke = 0;
    for(ll i = maxx; i>=2; i--){
        ll cnt = 0;
        for(ll j=i; j<=maxx; j+=i){
            cnt+=freq[j];
        }
        if(cnt>1) maxxPoke = max(maxxPoke, cnt);
    }

    cout <<maxxPoke <<endl;

    return 0;
}