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
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        vector<int> diff(n-1);
        for(int i=0; i<n-1; i++){
            diff[i] = abs(ara[i]-ara[i+1]);
        }
        int score = INT_MAX;
        if(n>=2) score = min(score, diff[0]);
        if(n>=2) score = min(score, diff[n-2]);
        for(int i=1; i<n-1; i++){
            int maxDiff = max(diff[i-1], diff[i]);
            score = min(score, maxDiff);
        }
        cout<<score<<endl;
    }

    return 0;
}