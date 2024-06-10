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
        map<int, int> mp;
        int cnt=0, cnt2=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>0) cnt++;
            else cnt2++;
            if(x==1) mp[1]++;
        }

        if((cnt+1)>=cnt2) cout<<0<<endl;
        else{
            if(mp[1]==0) cout<<1<<endl;
            else if(mp[1]==cnt) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }

    return 0;
}