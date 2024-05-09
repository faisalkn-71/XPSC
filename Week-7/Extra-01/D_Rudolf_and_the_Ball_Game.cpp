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
        int n, m, x;
        cin>>n>>m>>x;
        set<int> s;
        s.insert(x);
        for(int i=0; i<m; i++){
            int y; char c;
            cin>>y>>c;
            int op = 2;
            if(c=='0') op=0;
            if(c=='1') op = 1;
            set<int> ns;
            for(auto j:s){
                if(op!=1){ 
                    if((j+y)%n==0) ns.insert(n);
                    else ns.insert((j+y)%n);
                }
                if(op!=0){ 
                    if(((j-y)+n)%n==0) ns.insert(n);
                    else ns.insert(((j-y)+n)%n);
                }
            }
            s = ns;
        }
        cout<<s.size()<<endl;
        for(auto z:s){
            cout<<z<<" ";
        }
        cout<<endl;
    }

    return 0;
}