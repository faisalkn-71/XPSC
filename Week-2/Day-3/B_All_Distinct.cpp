#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[ara[i]]++;
        }
        int del = 0;
        for(auto i: freq){
            del += (i.second - 1);
        }
        int ans = n - del;
        if(del % 2 == 1){
            ans--;
        }

        cout<<ans<<"\n";
    }
    return 0;
}