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
        string a, b;
        cin>>a>>b;
        ll flag = 0;
        for(ll i = 0; i < (ll)a.size() - 1; i++){
            if((a[i]=='0' && b[i]=='0') && (a[i+1]=='1' && b[i+1]=='1')){
                flag = 1;
                break;
            }
        }
        (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}
