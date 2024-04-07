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
        int a = 1, b = 0;
        int cnt = 0;
        while(a*2<=n){
            a = a*2;
            cnt++;
        }
        int ans = 1;
        bool flag = false;
        for(int i=cnt-1; i>=0; i--){
            if((n&1<<i)){
                b = b|(1<<i);
                flag = true;
            }
            else{
                if(flag) ans = ans*2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}