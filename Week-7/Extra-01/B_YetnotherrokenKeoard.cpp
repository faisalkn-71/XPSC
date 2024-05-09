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
        string s; cin>>s;
        int n = s.size();

        vector<int> cap, sm;
        vector<bool> ok(n+2, true);
        for(int i=0; i<n; i++){
            if(s[i]=='b'){
                if(!sm.empty()){
                    ok[sm.back()] = false;
                    sm.pop_back();
                }
                ok[i] = false;
            }
            else if(s[i]=='B'){
                if(!cap.empty()){
                    ok[cap.back()] = false;
                    cap.pop_back();
                }
                ok[i] = false;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                cap.push_back(i);
            }
            else{
                sm.push_back(i);
            }
        }
        for(int i=0; i<n; i++){
            if(ok[i]){
                cout<<s[i];
            }
        }
        cout<<endl;
    }

    return 0;
}