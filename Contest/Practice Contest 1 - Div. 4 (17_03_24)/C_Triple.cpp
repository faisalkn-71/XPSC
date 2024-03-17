#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        vector<int> freq(n+1, 0);
        for(int i=0;i<n;i++){
            freq[ara[i]]++;
        }
        int ans = -1;
        for(int i=1;i<=n; i++){
            if(freq[i]>=3){
                ans = i;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}