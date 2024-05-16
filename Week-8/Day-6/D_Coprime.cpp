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
         vector<int> v(1001, 0);
         int n;
         cin>>n;
         int maxx=-1;
         for(int i=1; i<=n; i++){
            int temp;
            cin>>temp;
            v[temp] = i;

         }
         for(int i=1; i<=1000; i++){
            for(int j=1; j<=1000; j++){
                if(v[i] && v[j] && int(__gcd(i,j))==1){
                    maxx = max(maxx, v[i]+v[j]);
                }
            }
         }
         cout<<maxx<<endl;
    }

    return 0;
}