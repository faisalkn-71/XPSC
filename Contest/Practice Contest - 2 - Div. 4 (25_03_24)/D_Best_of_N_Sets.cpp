#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;

        int need = abs(x-y)-1;
        int ans = need+x+y;
        cout<<ans<<"\n";
    }
    return 0;
}