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
        int  n;
        cin>>n;
        string s;
        cin>>s;
        int op=0, ans=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                op++;
            }
            else{
                if(op>0){
                    op--;
                }
                else if(op==0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}