#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        bool flag = false;
        if(a==b) flag = true;
        else{
            if(a%2 == b%2) flag = true;
            else flag = false;
        }

        (flag) ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}