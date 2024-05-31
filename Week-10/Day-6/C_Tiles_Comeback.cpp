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
        int k; cin>>k;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        vector<int> suff(n, 0);
        suff[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            suff[i] = suff[i+1]+(ara[i]==ara[n-1]);

        }
        if(ara[0]==ara[n-1]){
            if(suff[0]%k==0 || suff[0]>=k){
                cout<<"YES"<<endl;
                continue;
            }
        }

        bool flag = false;
        int cnt = 0;
        for(int i=0; i<=n-2; i++){
            cnt+=(ara[i]==ara[0]);
            if(cnt%k==0 && suff[i+1]>=k){
                flag = true;
                break;
            }
        }

        (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}