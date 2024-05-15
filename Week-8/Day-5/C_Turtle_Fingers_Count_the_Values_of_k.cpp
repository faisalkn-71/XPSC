#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
vector<ll> divisor(ll n){
    vector<ll> v;
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i == i){
                v.push_back(i);
            }
            else{
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll a, b, l, comp, cnt = 0;
        cin>>a>>b>>l;
        vector<ll> k = divisor(l);
        vector<ll> x, y;
        for(ll i=0; i<=20; i++){
            comp = pow(a, i);
            if(comp <= 1e6){
                x.push_back((comp));
            }
            else break;
        }
        for(ll i=0; i<=20; i++){
            comp = pow(b, i);
            if(comp <= 1e6){
                y.push_back((comp));
            }
            else break;
        }

        for(ll i=0; i<(ll)k.size();  i++){
            ll f=0;
            for(ll j=0; j<(ll)x.size(); j++){
                for(ll m=0; m<(ll)y.size(); m++){
                    if(k[i]*x[j]*y[m] == l){
                        cnt++;
                        f = 1; 
                        break;
                    }
                }
                if(f==1) break;
            }
        }
        cout<<cnt<<endl;
    }
 

    return 0;
}