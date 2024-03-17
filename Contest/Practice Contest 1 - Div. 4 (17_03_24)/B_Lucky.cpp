#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int num = stoi(str);
        int cnt1 = 0, cnt2 = 0, i=0;
        while(num>0 && i<6){
            int ans = num%10;
            if(i<3) cnt1 += ans;
            if(i>2) cnt2 += ans;
            num = num/10;
            i++;

        }
        (cnt1 == cnt2) ? cout<<"YES"<<"\n" : cout<<"NO"<<"\n";
    }
    return 0;
}