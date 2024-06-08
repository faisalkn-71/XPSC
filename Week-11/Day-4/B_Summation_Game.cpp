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
        int n, k, x;
        cin>>n>>k>>x;
        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        vector<int> pref(n+1);
        pref[1] = v[1];

        for(int i=2; i<=n; i++){
            pref[i] = pref[i-1] + v[i];
        }
        int ans = INT_MIN;
        for(int i=n; i>=0; i--){
            int idx = n-i;
            if(idx>k) break;
            int p = min(i, x);
            int sum = (pref[i-p] - (pref[i]-pref[i-p]));
            ans = max(ans, sum);
        }
        cout<<ans<<endl;
    }

    return 0;
}