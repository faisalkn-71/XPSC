#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(n%2==1){
            for(int i=1; i<=n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=1; i<=n-2; i++){
                cout<<2<<" ";
            }
            cout<<"1 3"<<endl;
        }
    }

    return 0;
}
