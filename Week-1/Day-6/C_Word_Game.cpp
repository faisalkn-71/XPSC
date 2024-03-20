#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string, int> freq;
        vector<string> ara[3];
        for(int i=0; i<3; i++){
            ara[i].resize(n);
            for(int j=0; j<n; j++){
                cin>>ara[i][j];
                freq[ara[i][j]]++;
            }
        }
        int p[3] = {0};
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(freq[ara[i][j]]==1){
                    p[i]+=3;
                }
                else if(freq[ara[i][j]]==2){
                    p[i]+=1;
                }
            }
        }
        cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<"\n";
    }
    return 0;
}