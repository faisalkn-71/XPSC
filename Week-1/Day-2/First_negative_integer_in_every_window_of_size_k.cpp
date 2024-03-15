#include<bits/stdc++.h>
using namespace std;
vector<long long> firstNeg(long long n, long long k, long long A[]){
    vector<long long> v;
    queue<long long> q;
    for(int i=0; i<k; i++){
        if(A[i]<0) q.push(i);
    }
    v.push_back(q.empty() ? 0 : A[q.front()]);

    for(int i=k; i<n; i++){
        while(!q.empty() && q.front() < i-k+1){
            q.pop();
        }
        if(A[i]<0) q.push(i);
        v.push_back(q.empty() ? 0 : A[q.front()]);

    }
    return v;
}
int main()
{
    long long n, k;
    cin>>n>>k;
    long long A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<long long> result = firstNeg(n, k, A);
    for(long long i : result){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}