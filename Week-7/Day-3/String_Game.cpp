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
        string s;
        cin>>s;
        int zeroCnt = 0, oneCnt = 0;
        for(int i=0; i<n; i++){
            if(s[i]== '1'){
                oneCnt++;
            }
            else zeroCnt++;
        }
        int minn = min(zeroCnt,  oneCnt);

        (minn%2 == 0) ? cout<<"Ramos"<<endl : cout<<"Zlatan"<<endl;
    }

    return 0;
}