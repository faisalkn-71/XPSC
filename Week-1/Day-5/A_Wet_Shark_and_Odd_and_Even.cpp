#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> ara(n);
    int minOdd = 1e9+7;
    long long sum = 0;
    for(int i=0; i<n; i++){
        cin>>ara[i];
        sum += ara[i];
        if(ara[i] % 2 == 1){
            minOdd = min(minOdd, ara[i]);
        }
    }
    if(sum%2==1){
        sum -= minOdd;
    }
    cout<<sum<<"\n";
    return 0;
}