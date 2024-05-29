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
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        stack<int> value;
        stack<int> idx;
        ll total_cost = 0;
        for(int i=0; i<n; i++){
            while(value.size()>1 && value.top()> ara[i]){
                int cur = value.top();
                value.pop();
                if(cur>=value.top()){
                    idx.pop();
                }
                else{
                    value.push(cur);
                    break;
                }
            }
            value.push(ara[i]);
            idx.push(i);
        }

        int last_item = value.top();
        value.pop();
        int last_idx = idx.top();
        idx.pop();

        while(!idx.empty()){
            total_cost += max(last_item, value.top()) * (last_idx-idx.top());
            last_item = value.top();
            value.pop();
            last_idx = idx.top();
            idx.pop();
        }

        cout<<total_cost<<endl;
    }

    return 0;
}