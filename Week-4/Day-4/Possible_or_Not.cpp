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
        int n, k;
        cin>>n>>k;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        int ans = -1;
        for(int i=0; i<n; i++){
            if((ara[i] & k) == k){
                    ans &= ara[i];
            }
        }
        if(ans == k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}