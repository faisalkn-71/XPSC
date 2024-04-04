#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin>>n;
    stack<string> s;
    for(int i=0; i<n; i++){
        string name;
        cin>>name;
        s.push(name);
    }
    set<string> ans;
    while(!s.empty()){
        if(ans.find(s.top()) == ans.end()){
            ans.insert(s.top());
            string prg = s.top();
            if(prg.size()>2){
                cout<<prg.substr(prg.size()-2);
            }
        }
        s.pop();
    }

    return 0;
}