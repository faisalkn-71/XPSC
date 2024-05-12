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
        bool ok = true;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            bool found = false;
            for(int j=i+1; j>=2; j--){
                if(x%j){
                    found = true;
                    break;
                }
            }
            ok &= found;
        }
        (ok) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}