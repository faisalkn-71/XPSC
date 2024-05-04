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
        int ans = INT_MAX;
        for(int i=0; i<26; i++){
            char c = 'a' + i;
            int l = 0, r=n-1;
            int p=0, f=0;
            while(l<r){
                if(s[l] != s[r]){
                    if(s[l]==c){
                        l++;
                        p++;
                    }
                    else if(s[r]==c){
                        r--;
                        p++;
                    }
                    else{
                        f=1;
                        break;
                    }
                }
                else{
                    l++;
                    r--;
                }
            }
            if(f != 1)  ans = min(ans, p);
        }
        (ans==INT_MAX) ? cout<<"-1"<<endl : cout<<ans<<endl;

    }

    return 0;
}