#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long total = 0;
    for(int i=1; i<=n; i++){
        total+=i;
    }
    for(int i=0; i<n-1; i++){
        int a;
        cin>>a;
        total -= a;
    }
    cout<<total<<"\n";
    return 0;
}