#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> d(n);
        int max_d = INT_MIN;
        
        for (int i = 0; i < n; ++i) {
            d[i] = a[i] - b[i];
            if (d[i] > max_d) {
                max_d = d[i];
            }
        }

        vector<int> strongVertices;
        for (int i = 0; i < n; ++i) {
            if (d[i] == max_d) {
                strongVertices.push_back(i + 1);  
            }
        }

        cout << strongVertices.size() << endl;
        for (int vertex : strongVertices) {
            cout << vertex << " ";
        }
        cout << endl;
    }

    return 0;
}