#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool solve(vector<int> &a){
    vector<int> sorted = a;
    sort(sorted.begin(), sorted.end());
    int n = a.size();
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            if(a[(i+j)%n] != sorted[j]){
                flag = false;
                break;
            }
        }
        if(flag) return true;
    }
    return false;
}

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
        for(int i=0; i<n; i++) cin>>a[i];

        cout<<(solve(a) ? "Yes" : "No")<<endl;
    }

    return 0;
}