#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        if(n==2){
            cout<<stoi(str)<<endl;
        }
        else if(n==3){
            ll num1 = (str[0]-'0')*10 + (str[1]-'0');
            ll ans1 = min(num1*(str[2]-'0'), num1+(str[2]-'0'));
            ll num2 = (str[1]-'0')*10 + (str[2]-'0');
            ll ans2 = min(num2* (str[0]-'0'), num2+(str[0]-'0'));

            cout<<min(ans1, ans2)<<endl;
        }
        else{
            ll ans = 1e18;
            bool flag = false;
            for(ll i=0; i<n-1; i++){
                ll num = (str[i]-'0')*10 + (str[i+1]-'0');
                for(ll j=0; j<n; j++){
                    if(j==i || j==i+1) continue;
                    if(str[j]=='0') flag = true;
                    if(str[j]=='1') continue;
                    else num+=(str[j]-'0');
                }
                ans = min(num, ans);
                if(flag){
                    ans = 0;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}