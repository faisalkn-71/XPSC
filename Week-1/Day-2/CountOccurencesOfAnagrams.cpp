#include<bits/stdc++.h>
using namespace std;
int search(string pat, string txt){
    int k = pat.size();
    int n = txt.size();
    vector<int> patFreq(26, 0), txtFreq(26, 0);
    for(int i=0; i<k; i++){
        patFreq[pat[i] - 'a']++;
        txtFreq[txt[i] - 'a']++;
    }
    int cnt = 0;
    if(patFreq == txtFreq) cnt++;
    for(int i=k; i<n; i++){
        txtFreq[txt[i] - 'a']++;
        txtFreq[txt[i-k] - 'a']--;
        if(patFreq == txtFreq) cnt++;
    }
    return cnt;
}
int main()
{
    string pat, txt;
    cin>>txt>>pat;
    int result = search(pat, txt);
    cout<<result<<"\n";
    return 0;
}