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
        ll n;
        string s;
        cin>>n>>s;
        ll x=0, y=0;
        for(int i=0;i<n; i++){
            if(s[i]=='N') y++;
            else if(s[i]=='S') y--;
            else if(s[i]=='E') x++;
            else if(s[i]=='W') x--;
        }

        if(abs(x)%2 ==0 && abs(y)%2==0);
        else{
            cout<<"NO"<<endl;
            continue;
        }
        x/=2;
        y/=2;
        ll N=0, S=0, E=0, W=0;
        if(!x && !y){
            if(n==2){
                cout<<"NO"<<endl;
                continue;
            }
            for(int i=0; i<n; i++) if(s[i]=='N') N=1, S=1;
            if(!N) E=1, W=1;

        }
        if(y>0) N=y;
        else if(y<0) S=-y;
        if(x>0) E=x;
        else if(x<0) W=-x;
        for(int i=0; i<n; i++){
            if(s[i]=='N' && N){
                cout<<'R';
                N--;
            }
            else if(s[i]=='S' && S){
                cout<<'R';
                S--;
            }
            else if(s[i]=='E' && E){
                cout<<'R';
                E--;
            }
            else if(s[i]=='W' && W){
                cout<<'R';
                W--;
            }
            else{
                cout<<'H';
            }
        }
        cout<<endl;
    }

    return 0;
}