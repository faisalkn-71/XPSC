#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int clacore(int x){
    int score = 0;
    while(x>1){
        score++;
        x/=2;
    }
    return score;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        int score = clacore(r);
        cout<<score<<endl;
    }
 

    return 0;
}   