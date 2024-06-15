#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int sumOfDiff(vector<int>& a){
    int sum = 0;
    for(size_t i=0; i<a.size() - 1; i++){
        sum += abs(a[i] - a[i+1]);
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int sum = sumOfDiff(a);
        int maxx = sum;

        for(int i=0; i<n; i++){
            int org = a[i];

            a[i] = 1;
            maxx = max(maxx, sumOfDiff(a));

            a[i] = k;
            maxx = max(maxx, sumOfDiff(a));

            a[i] = org;
        }

        cout<<maxx<<endl;
    }
 

    return 0;
}