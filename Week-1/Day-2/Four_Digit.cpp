#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str = to_string(n);
    int len = str.length();
    if(len<4){
        int ans = 4-len;
        while(ans--){
            str.insert(0, "0");
        }
    }
    cout<<str<<endl;
    return 0;
}