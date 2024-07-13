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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        int i = 0;
        
        while (i < n) {
            while (i < n && s[i] == '1') {
                i++;
            }
            int j = i;
            while (j < n && s[j] == '0') {
                j++;
            }
            int len = j - i;
            if (i == 0 && j == n) {
                count += (len + k) / (k + 1);
            } else if (i == 0 || j == n) {
                count += len / (k + 1);
            } else {
                count += (len - k) / (k + 1);
            }
            i = j;
        }

        cout << count << endl;
    }

    return 0;
}