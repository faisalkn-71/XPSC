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
        vector<int> a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        map<int, vector<int>> idx;
        for(int i=1; i<=n; i++){
            idx[a[i]].push_back(i);
        }
        bool flag = false;
        for(int i=1; i<=n; i++){
            if(idx[a[i]].size()>2){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> p(n+1, -1), q(n+1, -1);
        multiset<int> remP, remQ;
        for(int i=1; i<=n; i++){
            remP.insert(i);
            remQ.insert(i);
        }
        for(int i=1; i<=n; i++){
            if(idx[i].empty()) continue;
            if(idx[i].size()==1){
                p[idx[i][0]]=i;
                remP.erase(remP.find(i));
            }
            else if(idx[i].size()==2){
                p[idx[i][0]] = i;
                remP.erase(remP.find(i));
                q[idx[i][1]] = i;
                remQ.erase(remQ.find(i));
            }
        }

        for(int i=1; i<=n; i++){
            if(p[i]==-1 && q[i]==-1){
                auto px = remP.end();
                px--;
                p[i] =* px;
                remP.erase(px);
                auto qx = remQ.end();
                qx--;
                q[i] =* qx;
                remQ.erase(qx);;
            }
            else if(p[i]==-1){
                if(remP.empty()){
                    flag = true;
                    break;
                }
                auto x = remP.upper_bound(q[i]);
                if(x==remP.begin()){
                    flag = true;
                    break;
                }
                x--;
                p[i]=* x;
                remP.erase(x);
            }
            else if(q[i]==-1){
                if(remQ.empty()){
                    flag = true;
                    break;
                }
                auto x = remQ.upper_bound(p[i]);
                if(x==remQ.begin()){
                    flag = true;
                    break;
                }
                x--;
                q[i]=* x;
                remQ.erase(x);
            }
        }
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=1; i<=n; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
        for(int i=1; i<=n; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;


    }

    return 0;
}