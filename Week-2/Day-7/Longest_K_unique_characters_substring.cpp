#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.size();
        int freq[26] = {0};
        int start = 0, end = 0, unique = 0, max_len = -1;

        while(end < n) {
            if(freq[s[end]-'a'] == 0)
                unique++;
            freq[s[end]-'a']++;
            end++;

            while(unique > k) {
                if(freq[s[start]-'a'] == 1)
                    unique--;
                freq[s[start]-'a']--;
                start++;
            }

            if(unique == k)
                max_len = max(max_len, end - start);
        }

        return max_len;
    }
};

int main() {
    Solution solution;
    string s;
    cin>>s;
    int k = 3;
    cout << solution.longestKSubstr(s, k) << endl;
    return 0;
}
