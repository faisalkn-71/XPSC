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
        ll n, m, maxx, sum=0;
        cin>>n>>m>>maxx;
        if((m-maxx)>1 || (n<m)){
            cout<<-1<<endl;
            continue;
        }
        if(maxx==m){
            maxx--;
        }

        for(ll i=0; i<n; i++){
            if(m>i){
                sum+=i;
            }
            else sum+=maxx;
        }

        cout<<sum<<endl;
    }

    return 0;
}