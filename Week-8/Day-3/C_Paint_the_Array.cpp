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
        int n; 
        cin>>n; 
        vector<ll> ara(n);
        for(int i=0; i<n; i++) cin>>ara[i];

        ll v1=0, v2=0;

        for(int i=0; i<n; i+=2) v1 = __gcd(v1, ara[i]);
        for(int i=1; i<n; i+=2) v2 = __gcd(v2, ara[i]);

        bool flag = true;
        for(int i=0; i<n; i+=2){
            if(ara[i]%v2==0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<v2<<endl;
            continue;
        }
        flag = true;
        for(int i=1; i<n; i+=2){
            if(ara[i]%v1 ==0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<v1<<endl;
            continue;
        }
        cout<<0<<endl;
    }

    return 0;
}