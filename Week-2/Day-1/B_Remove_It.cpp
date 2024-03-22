#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    vector<int> ara(n);
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }
    vector<int> ara2;
    for(int i=0; i<n; i++){
        if(ara[i] != k){
            ara2.push_back(ara[i]);
        }
    }
    for(int i=0; i<ara2.size(); i++){
        cout<<ara2[i]<<" ";
    }
    cout<<"\n";
    return 0;
}