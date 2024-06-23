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
        ll x, y;
        cin>>x>>y;
        ll cnt=0; 
        for(int i=0; i<40; i++){
            bool flag=0, flag2=0;
            if(x&(1LL<<i)) flag=1;
            if(y&(1LL<<i)) flag2=1;
            if(flag2==flag) cnt++;
            else break;
        }
        cout<<(1LL<<cnt)<<endl;
    }

    return 0;
}