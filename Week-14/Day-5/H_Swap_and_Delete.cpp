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
        string str;
        cin>>str;
        int one =0, zero = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='1') one++;
            else zero++;
        }
        for(int i=0; i<str.size(); i++){
            if(str[i]=='1'){
                if(zero>0) zero--;
                else break;
            }
            else{
                if(one>0) one--;
                else break;
            }
        }
        cout<<one+zero<<endl;
    }

    return 0;
}