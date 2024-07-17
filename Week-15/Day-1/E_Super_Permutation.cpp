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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n%2){
            cout<<-1<<endl;
        }
        else{
            int j=1;
            for(int i=n; i>0; i--){
                if(i%2){
                    cout<<j<<" ";
                    j+=2;
                }
                else cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}