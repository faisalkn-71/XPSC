#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = (ll)s.size(), c=0, minn = INT_MAX, maxx;
        for(char i='a'; i<='z'; i++){
            c=0, maxx = 0;
            for(ll j=0; j<n; j++){
                if(s[j]!=i){
                    c++;
                    if(c>maxx){
                        maxx = c;
                    }
                }
                else{
                    c=0;    
                }
            }
            if(maxx<minn){
                minn = maxx;
            }
        }
        if(minn ==0){
            cout<<0<<endl;
        }
        else{
            c=0;
            while(minn!=1){
                minn/=2;
                c++;
            }
            cout<<c+minn<<endl;
        }
    }

    return 0;
}