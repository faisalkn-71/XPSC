#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool check(ll mid, vector<ll> &machines, ll t){
    ll total = 0;
    for(auto &time:machines){
        total += mid/time;
        if(total >= t) return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t;
    cin>>n>>t;
    vector<ll> machines(n);
    for(ll i=0; i<n; i++){
        cin>>machines[i];
    }
    ll left = 1, right = 1e18, ans = right;
    while(left<=right){
        ll mid = left + (right -left)/2;
        if(check(mid, machines, t)){
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout<<ans<<endl;


    return 0;
}