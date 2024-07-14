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
        int n;
        cin>>n;
        string a, b, c;
        cin>>a>>b>>c;

        bool flag = false;
        for(int i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                flag = true;
                break;
            }
        }

        (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}