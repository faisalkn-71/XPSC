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
        int n, q;
        cin>>n>>q;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        map<int, vector<int>> idx;
        for(int i=0; i<n; i++){
            idx[ara[i]].push_back(i);
        }
        while(q--){
            int a, b;
            cin>>a>>b;
            if(idx[a].empty() || idx[b].empty()){
                cout<<"NO"<<endl;
                // continue;
            }
            else if(a==b){
                cout<<"YES"<<endl;
                // continue;
            }
            else if(idx[a].front()<idx[b].back()){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}