#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        s = s+s;
        int ans = 0;
        int i=0, j=0;
        while(i<2*n){
            if(s[i]==c){
                j=i;
                while(j<2*n && s[j]!='g'){
                    j++;
                }
                ans = max(ans, j-i);
            }
            i++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}