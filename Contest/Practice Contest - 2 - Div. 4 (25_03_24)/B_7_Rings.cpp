#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        long long mul = n*x;
        int cnt  = 0;
        while(mul>0){
            mul /= 10;
            cnt++;
        }
        if(cnt==5) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}