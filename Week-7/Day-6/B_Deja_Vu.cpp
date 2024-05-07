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
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int query;
        vector<int> v2;
        for(int i=0; i<q; i++){
            cin>>query;
            if(v2.empty() || v2.back()>query){
                v2.push_back(query);
            }
        }
        for(int i=0; i<n; i++){
            for(auto it:v2){
                if(v[i]%(1<<it)==0){
                    it = it-1;
                    v[i] += (1<<it);
                }
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}