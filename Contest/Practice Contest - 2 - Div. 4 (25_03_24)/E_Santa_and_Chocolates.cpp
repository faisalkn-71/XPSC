#include<bits/stdc++.h>
using namespace std;
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
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        vector<int> b(n);
        for(int i=0; i<n; i++){
            b[i] = sum/n;
        }
        for(int i=0; i<sum%n; i++){
            b[i]+=1;
        }
        bool flag = false;
        int i, j;
        for(i=0,j=i+1; i<n-1; i++, j++){
            // cout<<b[i]<<" "<<b[j]<<endl;
            if((b[i]-b[j])<=k && b[i]!=0 && b[j]!=0){
                flag = true;
                break;
            }
        }
        (flag) ? cout<<"YES\n" : cout<<"NO\n";

    }
    return 0;
}