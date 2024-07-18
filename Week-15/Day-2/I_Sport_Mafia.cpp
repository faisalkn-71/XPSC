#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin>>n>>k;
    ll i=0;
    ll j=n;
    while(i<=j){
        ll a = i+(j-i)/2;
        if((((n-a)*(n-a+1))/2)-a==k){
            cout<<a;
            return 0;
        }
        else if((((n-a)*(n-a+1))/2)-a<k){
            j=a-1;
        }
        else{
            i=a+1;
        }
    }

    return 0;
}