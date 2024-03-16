#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int i=1, ans=0;
    while(true){
        ans = c*i;
        if(ans>=a && ans<=b){
            break;
        }
        if(ans>b){
            ans = -1;
            break;
        }
        i++;
    }
    cout<<ans<<"\n";
    return 0;
}