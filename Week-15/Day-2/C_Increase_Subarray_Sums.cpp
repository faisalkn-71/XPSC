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
        int n, x;
        cin>>n>>x;
        int a[n+3];
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int> v;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+=a[i];
            int maxx = sum;
            int sum2 = sum;
            int k=0;
            for(int j=i+1; j<n; j++){
                sum2 += a[j];
                sum2 -= a[k];
                k++;
                maxx = max(maxx, sum2);
            }
            v.push_back(maxx);
        }

        for(int i=0; i<=n; i++){
            int maxx = 0;
            for(int j=0; j<v.size(); j++){
                int sum;
                if(i>j+1){
                    sum = v[j]+x*(j+1);
                }
                else{
                    sum = v[j] + x*i;
                }
                maxx = max(maxx, sum);
            }
            cout<<maxx<<" ";
        }
        cout<<endl;
    }

    return 0;
}