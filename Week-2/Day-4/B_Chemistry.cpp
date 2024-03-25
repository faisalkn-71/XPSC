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
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        int cnt = 0;
        for(auto it:mp){
            if(it.second%2 != 0) cnt++;
        }
        if(cnt-1<0) cnt=0;
        else cnt = cnt-1;

        if(k>=cnt && k<=n){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}