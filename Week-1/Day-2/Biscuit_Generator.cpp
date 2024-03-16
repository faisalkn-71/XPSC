#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin>>a>>b>>t;
    int times = t/a;
    int total = times * b;
    cout<<total<<"\n";
    return 0;
}