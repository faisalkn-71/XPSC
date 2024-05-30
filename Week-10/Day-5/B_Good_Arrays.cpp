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
        ll sum = 0;
        int cnt = 0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x==1) cnt++;
            sum += x;
            ara.push_back(x);
        }

        (sum-n >= cnt && n!=1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}