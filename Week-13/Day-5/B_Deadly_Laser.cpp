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
        int n, m, x, y, d;
        cin>>n>>m>>x>>y>>d;
        if((x-d) <= 1 && (x+d) >=n) cout<<"-1"<<endl;
        else if((y-d) <= 1 && (y+d) >=m) cout<<"-1"<<endl;
        else if((x-d) <= 1 && (y-d)<=1) cout<<"-1"<<endl;
        else if((x+d) >=n && (y+d)>=m) cout<<"-1"<<endl;
        else{
            cout<<(n+m)-2<<endl;
        }
    }

    return 0;
}