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
        int n, x;
        cin>>n;
        int maxx = INT_MIN;

        map<int, int> m;
        for(int i=0; i<n; i++){
            cin>>x;
            m[x]++;
            maxx = max(maxx, m[x]);
        }

        if(maxx==n){
            cout<<0<<endl;
        }
        else{
            int cnt = 1;
            while(maxx<=n){
                if(maxx+maxx>=n){
                    cnt+=(n-maxx);
                    break;
                }
                cnt+=maxx;
                maxx = maxx*2;
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}