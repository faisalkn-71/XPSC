#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> b(n), a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    long long max_x = 0;

    
    for (int i = 0; i < n; ++i) {
        a[i] = b[i] + max_x;
        max_x = max(max_x, a[i]);
    }

   
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}