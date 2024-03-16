#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    vector<int> freq(26, 0);
    for(int i=0; i<str.length(); i++){
        freq[str[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(freq[i]==0){
            cout<<char(i+'a')<<"\n";
            return 0;
        }
    }
    cout<<"None"<<"\n";
    return 0;
}