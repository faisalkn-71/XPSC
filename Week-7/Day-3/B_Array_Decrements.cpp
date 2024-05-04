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
        int n; cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        int diff = -1, zeroDiff = -1;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                flag = true;
                break;
            }
            if(b[i]!=0){
                if(diff==-1){
                    diff = a[i] - b[i];
                }
                else{
                    if(a[i]-b[i] != diff){
                        flag = true;
                        break;
                    }
                }
            }
            else{
                zeroDiff = max(zeroDiff, a[i]-b[i]);
            }
        }
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        (diff==-1 || zeroDiff<=diff) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}