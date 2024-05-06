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
        int n, k;
        cin>>n>>k;
        vector<int> a, b;
        int x;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x>0) a.push_back(x);
            if(x<0) b.push_back(-x);
        }

        ll ans = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(b.size()==0){
            if(a.size()!=0){
                for(int i=0; i<a.size(); i+=k){
                    ans += a[i]*2;
                }
                ans -= a[0];
            }
            cout<<ans<<endl;
        }
        else if(a.size()==0){
            if(b.size()!=0){
                for(int i=0; i<b.size(); i+=k){
                    ans += b[i]*2;

                }
                ans -= b[0];
            }
            cout<<ans<<endl;
        }
        else{
            for(int i=0; i<a.size(); i+=k) ans+=a[i]*2;
            for(int i=0; i<b.size(); i+=k) ans+=b[i]*2;
            if(a[0]>=b[0]) ans -= a[0];
            else ans-=b[0];
            cout<<ans<<endl;
        }
    }

    return 0;
}