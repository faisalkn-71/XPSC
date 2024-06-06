#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int ans(const string s){
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    set<pair<int, int>> visit;
    visit.insert({0, 0});

    for(int i=0;i<4; i++){
        if(s[i]=='1'){
            for(auto child: visit){
                int x = child.first;
                int y = child.second;
                for(int j=1; j<11; j++){
                    int nx = x + dx[i] * j;
                    int ny = y + dy[i] * j;
                    if(nx >= -10 && nx<=10 && ny>=-10 && ny<=10){
                        visit.insert({nx, ny});
                    }
                }
            }
        }
    }
    return visit.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<ans(s)<<endl;
    }

    return 0;
}