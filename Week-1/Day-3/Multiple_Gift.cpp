#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    cin>>x>>y;
    int cnt = 0;
    for(long long i=x; i<=y; i *= 2){
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}