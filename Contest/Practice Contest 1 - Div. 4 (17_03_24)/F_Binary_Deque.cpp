#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        vector<int> ara(n);
        int total = 0;
        for(int i=0; i<n; i++){
            cin>>ara[i];
            total += ara[i];
        }
        if(total < s){
            cout<<-1<<"\n";
            continue;
        }
        int l=0, r=0, sum=0, maxx=0;
        while(r<n){
            while(r<n && sum+ara[r]<=s){
                sum += ara[r];
                r++;
            }
            maxx = max(maxx, r-l);
            while(l<n && sum+ara[r] > s){
                sum -= ara[l];
                l++;
            }
        }
        cout<<n-maxx<<"\n";
    }
    return 0;
}