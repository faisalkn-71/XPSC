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

        sort(a.begin(), a.end());

        vector<int> v;
        for(int i=0; i<n; i++){
            if(a[i]%a[0]) v.push_back(a[i]);
        }
        bool flag = 1;
        for(int i=0; i<v.size(); i++){
            if(v[i]%v[0]){
                flag = 0;
                break;
            }
        }

        cout<<(flag ? "Yes" : "NO")<<endl;
    }

    return 0;
}