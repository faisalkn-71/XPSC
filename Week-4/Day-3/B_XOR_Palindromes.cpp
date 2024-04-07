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
        string s;
        cin>>s;
        string ans = "";
        int gp = 0;
        int bug = 0;
        int l=0, r=n-1;
        while(l<r){
            if(s[l]==s[r]) gp += 2;
            else bug++;
            l++;
            r--;
        }
        for(int i=0; i<=n; i++){
            int total = i;
            total -= bug;
            if(total<0){
                ans.push_back('0');
                continue;
            }
            total = max((total%2),  total-gp);
            total = max(0, total-(n%2));

            (total==0) ? ans.push_back('1') : ans.push_back('0');
        }
        cout<<ans<<endl;
    }

    return 0;
}