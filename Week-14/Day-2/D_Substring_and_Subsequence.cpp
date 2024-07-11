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
        int sizeA = a.size(), sizeB = b.size(), extra = 0;
        int ans = sizeA + sizeB;
        for(int i=0; i<sizeB; i++){
            int temp = 0, from = i;
            for(int j=0; j<sizeA && from<sizeB; j++){
                if(a[j]==b[from]){
                    from++;
                    temp++;
                }
            }
            extra = max(extra, temp);
        }
        cout<<ans - extra<<endl;
    }

    return 0;
}