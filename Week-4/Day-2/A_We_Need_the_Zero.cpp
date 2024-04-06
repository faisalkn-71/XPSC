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
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        int x = 0;
        for(int i=0; i<n; i++){
            x^=ara[i];
        }
        for(int i=0; i<n; i++){
            ara[i]^=x;
        }
        int y=0;
        for(int i=0; i<n; i++){
            y^=ara[i];
        }
        (y==0) ? cout<<x<<endl : cout<<-1<<endl;
    }
    return 0;
}