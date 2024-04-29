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
        int n; cin>>n;
        vector<ll> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];

        }
        sort(ara.begin(), ara.end());
        ll ans;
        auto pos = [&](ll x)->bool{
            int cnt =1;
            for(int l=0, r=l+1; r<n; ){
                if(ara[l]+x+x >= ara[r]){
                    r++;
                }
                else{
                    cnt++;
                    l=r;
                    r=l;
                }
            }
            return (cnt<4);
        };

        ll low=0, high = 1e15;
        while(low<=high){
            ll mid = low+(high-low)/2LL;
            if(pos(mid)){
                ans = mid;
                high = mid-1LL;
            }
            else{
                low = mid+1LL;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}