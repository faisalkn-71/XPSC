#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
string decToBin(int n){
    string ans;
    for(int i=64; i>=0; i--){
        int k=n>>i;
        if(k&1) ans+='1';
        else ans += '0';
    } 
    return ans;
}
int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
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
        vector<int> v(n);
        set<int> s;
        for(int i=0;i<n; i++){
            cin>>v[i];
        }
        vector<int> m(64);
        int g=0;
        for(int i=0;  i<n; i++){
            string s = decToBin(v[i]);
            for(int j=0; j<64; j++){
                if(s[j]!='0') m[j]++;
            }
        }
        for(int i=0; i<64; i++){
            g = GCD(g, m[i]);
        }
        for(int i=1; i<=n; i++){
            if(g%i ==0) cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}