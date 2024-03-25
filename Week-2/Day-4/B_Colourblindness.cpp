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
        string s;
        string st;
        cin>>s>>st;

        for(int i=0; i<n; i++){
            if(s[i]=='G') s[i] = 'B';
            if(st[i]=='G') st[i] = 'B';
        }

        (s==st) ? cout<<"YES\n" : cout<<"NO\n";

    }
    return 0;
}