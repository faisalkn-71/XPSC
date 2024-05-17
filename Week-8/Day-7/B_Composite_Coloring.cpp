#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
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
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = -1;
        }
        int cur_col = 1;
        for(int p:prime){
            bool flag = 0;
            for(int i=0; i<n; i++){
                if(ans[i] != -1){
                    continue;
                }
                if(ara[i]%p){
                    continue;
                }
                flag = 1;
                ans[i] = cur_col;
            }
            if(flag) cur_col++;
        }
        cout<<(cur_col-1)<<endl;
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}