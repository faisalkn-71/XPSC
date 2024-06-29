#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        string s, t;
    cin >> s >> t;

    int len_s = s.length();
    int len_t = t.length();
    
    int suff = 0;
    while (suff < len_s && suff < len_t &&
           s[len_s - suff - 1] == t[len_t - suff - 1]) {
        suff++;
    }
    
    int min_deletions = (len_s - suff) + (len_t - suff);
    
    
    cout << min_deletions << endl;

    return 0;
}