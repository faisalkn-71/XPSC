#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin>>s>>t;
    int op = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i]){
            s[i]=t[i];
            op++;
        }
    }
    cout<<op<<"\n";
    return 0;
}