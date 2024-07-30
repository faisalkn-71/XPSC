#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }

    bool flag = true;
    int maxx = ara[0];

    for(int i=0; i<n; i++){
        if(ara[i]>(maxx+1) || ara[i]>i){
            cout<<i+1;
            flag = false;
            break;
        }

        if(ara[i]>maxx){
            maxx = ara[i];
        }
    }

    if(flag){
        cout<<"-1"<<endl;
    }

    return 0;
}