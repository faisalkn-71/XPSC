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
        string s;
        cin>>s;
        vector<ll> cng;
        vector<ll> dis;
        ll total = 0;
        int minCng = 0;
        for(int i=0; i<n; i++){
            ll L = i;
            ll R = n-i-1;
            if(s[i]=='L'){
                if(R>L){
                    minCng++;
                    total+=R;
                    dis.push_back(R-L);
                }
                else{
                    total+=L;
                }
            }
            else{
                if(L>R){
                    minCng++;
                    dis.push_back(L-R);
                    total+=L;
                }
                else{
                    total+=R;
                }
            }
        }
        vector<ll> ans(n+1);
        for(int i=minCng; i<=n; i++){
            ans[i]=total;
        }
        sort(dis.begin(), dis.end(), greater<ll>());
        for(int i= minCng-1; i>=1; i--){
            total-=dis.back();
            dis.pop_back();
            ans[i] = total;
        }
        for(int i=1; i<=n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}