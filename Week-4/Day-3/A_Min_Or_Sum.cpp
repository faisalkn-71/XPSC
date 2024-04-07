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
        for(int i=0;  i<n; i++){
            cin>>ara[i];
        }
        ll OR = 0;
        for(int i=0; i<n; i++){
            OR |= ara[i];
        }
        cout<<OR<<endl;
    }

    return 0;
}