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
        int n; cin>>n;
        vector<int> ara(n);
        for(int i=0; i<=n-1; i++){
            cin>>ara[i];
        }
        set<int> s;
        int visited = 0;
        for(int i=n-1; i>=0; i--){
            s.insert(ara[i]);
            visited++;
            if(visited != s.size()) break;
        }

        cout<<n - (s.size())<<endl;
    }

    return 0;
}