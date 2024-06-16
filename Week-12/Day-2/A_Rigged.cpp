#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
void solve(){
    int n; 
        cin>>n;
        vector<int> v(n);
        vector<int> v2(n);

        for(int i=0;i<n; i++){
            cin>>v[i]>>v2[i];
        }
        int w = v[0];

        for(int i=1; i<n; i++){
            if(v[i]>=w){
                if(v2[i]>=v2[0]){
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        cout<<w<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}