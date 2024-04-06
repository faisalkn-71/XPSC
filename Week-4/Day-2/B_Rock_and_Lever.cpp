#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll bit(ll k){
    int c=0;
    ll d= 1;
    while(k!=0){
        c++;
        k = k>>d;

    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, p;
    cin>>t;
    while(t--){
        cin>>n;
        ll sum = 0;
        int c = 1;
        vector<ll> ara(n), bi(n);
        map<ll, ll> mp;
        for(int i=0; i<n; i++){
            cin>>ara[i];
            bi[i] = bit(ara[i]);
            mp[bi[i]]++;
        }
        ll total = 0;
        map<ll, ll>::iterator it;
        for(it= mp.begin(); it!=mp.end(); it++){
            p = it->second;
            total += (p*(p-1))/2;
        }
        cout<<total<<endl;
    }

    return 0;
}