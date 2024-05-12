#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
map<int, int> mp;
void prime(int n){
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            n = n/i;
            mp[i]++;
        }
    }
    if(n>1) mp[n]++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        mp.clear();
        int n; cin>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
            prime(ara[i]);
        }
        bool ok = true;
        for(auto it:mp){
            if(it.second % n != 0) ok = false;

        }
        (ok) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}