#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int solve(vector<int> &v){
    int i=0, j=v.size()-1;
    int ans = 1;
    while(i<j){
        if(v[i] != v[j]){
            ans = 0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ara[n+2];
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        int i=0, j=n-1;
        int ans = -1;
        int a, b;
        while(i<j){
            if(ara[i]!=ara[j]){
                ans = 1;
                a = ara[i];
                b = ara[j];
                break;
            }
            i++;
            j--;
        }
        if(ans==-1) cout<<"YES"<<endl;
        else{
            vector<int> v1, v2;
            for(int i=0; i<n; i++){
                if(ara[i]==a) continue;
                v1.push_back(ara[i]);
            }
            for(int i=0; i<n; i++){
                if(ara[i]==b) continue;
                v2.push_back(ara[i]);
            }
            int ans1 = solve(v1);
            int ans2 = solve(v2);
            (ans1==1 || ans2==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
    }

    return 0;
}