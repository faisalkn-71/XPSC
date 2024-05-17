#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int gcd(int a, int b){
    while(b!=0){
        int t=b;
        b = a%b;
        a = t;
    }
    return a;
}
int gcd_array(const vector<int>& v){
    int res = v[0];
    for(int i=1; i<v.size(); i++){
        res = gcd(res, v[i]);
        if(res==1){
            return 1;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> ara(n);
    for(int i=0; i<n; i++){
        cin>>ara[i];
    }
    int maxx = *max_element(ara.begin(), ara.end());
    vector<int> diff;
    for(int i=0; i<n; i++){
        if(ara[i] != maxx){
            diff.push_back(maxx - ara[i]);
        }
    }
    int z = gcd_array(diff);
    ll total = 0;
    for(int i=0; i<n; i++){
        total += (maxx - ara[i]);
    }

    ll y = total/z;
    cout<<y<<" "<<z<<endl;
    

    return 0;
}