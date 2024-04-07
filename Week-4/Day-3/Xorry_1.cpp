#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
pair<int, int> findxp(int x){
    int a = 0, b = 0;
    int bitpos = 0;
    while((1<<bitpos) <=x){
        bitpos++;
    }
    int msb = 1 << (bitpos-1);
    a = msb;
    b = a^x;
    return {b, a};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int, int> xp = findxp(n);
        cout<<xp.first<<" "<<xp.second<<endl;
    }

    return 0;
}