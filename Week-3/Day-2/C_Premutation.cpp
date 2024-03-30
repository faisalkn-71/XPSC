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
        int mat[n+5][n];
        for(int i=1; i<=n; i++){
            for(int j=1; j<n; j++){
                cin>>mat[i][j];
            }
        }
        map<int, int> m1;
        map<int, int> m2;
        for(int i=1; i<=n; i++){
            m1[mat[i][n-1]] = i;
            m2[mat[i][n-1]]++;
        }
        int idx = 0, val;
        for(auto u:m2){
            if(u.second == 1) idx = u.first;
            else val = u.first;
        }
        for(int i=1; i<n; i++){
            cout<<mat[m1[idx]][i]<<" ";
        }
        cout<<val<<endl;
    }

    return 0;
}