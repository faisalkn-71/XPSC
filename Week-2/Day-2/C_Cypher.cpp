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
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            string s;
            cin>>s;
            for(char c:s){
                if(c=='D'){
                    ara[i]++;
                    if(ara[i]==10) ara[i]=0;
                }
                else{
                    ara[i]--;
                    if(ara[i]==-1) ara[i]=9;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<ara[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}