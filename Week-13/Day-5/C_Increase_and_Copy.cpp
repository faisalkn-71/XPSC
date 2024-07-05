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
        ll n;
        cin>>n;
        ll minn = 99999999999999;
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        ll k;
        for(ll i=2; i<50000;i++){
            if(n%i==0){
                k=(n/i)-1+(i-1);
            }
            else k = n/i+(i-1);

            minn = min(minn, k);
        }
        cout<<minn<<endl;
    }

    return 0;
}