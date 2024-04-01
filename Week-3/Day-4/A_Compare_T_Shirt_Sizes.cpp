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
        string a, b;
        cin>>a>>b;
        int n = a.size();
        int m = b.size();

        char c1, c2;
        int x1=0, x2=0;
        for(int i=0; i<n; i++){
            if(a[i]!='X') c1 = a[i];
            else x1++;
        }

        for(int i=0; i<m; i++){
            if(b[i]!='X') c2 = b[i];
            else x2++;
        }
        
        if(c1==c2){
            if(x1==x2 || c1=='M'){
                cout<<"="<<endl;
                continue;
            }
            if(c1 == 'S'){
                if(x1>x2){
                    cout<<"<"<<endl;
                }
                else cout<<">"<<endl;
            }
            else if(c1 == 'L'){
                if(x1>x2){
                    cout<<">"<<endl;
                }
                else cout<<"<"<<endl;
            }
            continue;
        }
        if(c1=='S') cout<<"<"<<endl;
        else if(c1=='M' && c2=='S') cout<<">"<<endl;
        else if(c1=='M' && c2=='L') cout<<"<"<<endl;
        else if(c1=='L') cout<<">"<<endl;
    }

    return 0;
}