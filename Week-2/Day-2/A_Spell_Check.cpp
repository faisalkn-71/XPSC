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
        cin>>s;
        if(n!=5){
            cout<<"NO\n";
            continue;
        }
        // cout<<s<<" ";
        sort(s.begin(), s.end());
        // cout<<s<<endl;
        if(s=="Timru") cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}