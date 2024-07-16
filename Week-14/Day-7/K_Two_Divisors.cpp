#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll a , b;
        cin>>a>>b;
        if(b%a==0){
            cout<<(b*b)/a<<endl;
        }
        else{
            cout<<lcm(a, b)<<endl;
        }
    }

    return 0;
}