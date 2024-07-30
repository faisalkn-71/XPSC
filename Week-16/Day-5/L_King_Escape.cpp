#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int q[2], k[2], t[2];
    char kQuad[2], tQuad[2];
    cin>>q[0];
    cin>>q[1];
    cin>>k[0];
    cin>>k[1];
    cin>>t[0];
    cin>>t[1];

    if(k[0]>q[0]){
        kQuad[0] = 'r';
    }
    else{
        kQuad[0] = 'l';
    }

    if(k[1]>q[1]){
        kQuad[1] = 'u';
    }
    else{
        kQuad[1] = 'd';
    }

    if(t[0]>q[0]){
        tQuad[0] = 'r';
    }
    else{
        tQuad[0] = 'l';
    }

    if(t[1]>q[1]){
        tQuad[1] = 'u';
    }
    else{
        tQuad[1] = 'd';
    }


    if((kQuad[0]==tQuad[0]) && (kQuad[1]==tQuad[1])){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}