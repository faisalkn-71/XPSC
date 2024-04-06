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
        int n,k;
        cin>>n>>k;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        int odd = 0;
        for(int i=0; i<k; i++){
            if(ara[i]%2 != 0) odd++;
        }
        int ans = 0;
        if(odd>0) ans++;
        for(int i=k; i<n; i++){
            if(ara[i-k] % 2 !=  0) odd--;
            if(ara[i]%2!=0) odd++;
            if(odd>0) ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}