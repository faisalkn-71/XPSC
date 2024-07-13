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
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        int minn =*min_element(a.begin(), a.end());
        int minnIdx;
        for(int i=0; i<n; i++){
            if(a[i]==minn){
                minnIdx = i;
                break;
            }
        }

        bool flag = false;
        for(int i=minnIdx+1; i<n; i++){
            if(a[i]<a[i-1]){
                flag = true;
                break;
            }
        }

        if(flag) minnIdx=-1;

        cout<<minnIdx<<endl;
    }

    return 0;
}