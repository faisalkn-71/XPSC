#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(a>b){
        if((a+(a-1)) > (a+b)) cout<<(a + (a-1))<<"\n";
        else cout<<(a+b)<<"\n";
    }
    else{
        if((b+(b-1)) > (b+a)) cout<<(b+(b-1))<<"\n";
        else cout<<(b+a)<<"\n";
    }
    return 0;
}