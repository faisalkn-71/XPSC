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
    
    vector<int> sushi(n);
    for (int i = 0; i < n; ++i) {
        cin >> sushi[i];
    }
    
    int maxLength = 0;
    int tunaCount = 0;
    int eelCount = 0;
    
    for (int i = 0; i < n;) {
        int start = i;
        while (i < n && sushi[i] == sushi[start]) {
            ++i;
        }
        int count = i - start;
        if (sushi[start] == 1) {
            tunaCount = count;
        } else {
            eelCount = count;
        }
        maxLength = max(maxLength, 2 * min(tunaCount, eelCount));
    }
    
    cout << maxLength << endl;

    return 0;
}