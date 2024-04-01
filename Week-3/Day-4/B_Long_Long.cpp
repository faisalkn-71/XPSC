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
        ll n; cin>>n;
        vector<ll> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        ll sum = 0, op = 0;
        bool neg = false;
        int  cons = 0;
        for(int i=0; i<=n; i++){
            if(i<n) sum+=abs(ara[i]);
            if(neg){
                if(i==n || ara[i]>0){
                    op++;
                    neg = false;
                }
            }
            else{
                if(ara[i]<0){
                    neg = true;
                }
            }
        }
        cout<<sum<<" "<<op<<endl;
    }

    return 0;
}