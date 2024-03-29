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
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]<=90) s[i]+=32;
        }
        string st;
        for(int i=0; i<n; i++){
            if(st.empty() || st.back()!=s[i]){
                st.push_back(s[i]);
            }
        }
        (st=="meow") ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}