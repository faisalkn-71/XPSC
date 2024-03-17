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
        int min = INT_MAX;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(ara[i]<min){
                min = ara[i];
            }
        }
        for(int i=0; i<n; i++){
            if(ara[i]>min){
                ans += (ara[i]-min);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}