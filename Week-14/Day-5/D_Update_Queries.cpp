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
        int n, m;
        cin>>n>>m;
        string str;
        cin>>str;
        set<int> st;
        for(int i=0; i<m; i++){
            int  x;
            cin>>x;
            st.insert(x);
        }

        string up;
        cin>>up;
        sort(up.begin(), up.end());
        int idx =0;
        for(auto it:st){
            str[it-1] = up[idx];
            idx++;
        }
        cout<<str<<endl;
    }

    return 0;
}