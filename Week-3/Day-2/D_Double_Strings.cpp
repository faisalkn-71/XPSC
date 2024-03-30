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
        int n; cin>>n;
        vector<string> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        map<string, int> freq;
        for(int i=0; i<n; i++){
            freq[ara[i]]++;
        }
        string ans(n, '0');

        for(int i=0; i<n; i++){
            if(ara[i].size()==1) continue;

            for(int len=1; len<ara[i].size(); len++){
                string x = ara[i].substr(0, len);
                string y = ara[i].substr(len);

                if(freq[x]>0 && freq[y]>0){
                    ans[i] = '1';
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
