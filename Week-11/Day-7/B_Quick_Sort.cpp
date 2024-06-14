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
        int cnt = 0;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp==cnt+1){
                cnt++;
            }
        }

        cout<<(n-cnt+k-1)/k<<endl;
    }

    return 0;
}