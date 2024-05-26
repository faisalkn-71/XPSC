#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

void add_number(int num, multiset<int>& low, multiset<int>& high, ll& low_sum, ll& high_sum) {
    if (low.empty() || num <= *low.rbegin()) {
        low.insert(num);
        low_sum += num;
    } else {
        high.insert(num);
        high_sum += num;
    }
}


void remove_number(int num, multiset<int>& low, multiset<int>& high, ll& low_sum, ll& high_sum) {
    if (low.find(num) != low.end()) {
        low.erase(low.find(num));
        low_sum -= num;
    } else {
        high.erase(high.find(num));
        high_sum -= num;
    }
}


void rebalance(multiset<int>& low, multiset<int>& high, ll& low_sum, ll& high_sum) {
    while (low.size() > high.size() + 1) {
        int moved = *low.rbegin();
        low.erase(prev(low.end()));
        high.insert(moved);
        low_sum -= moved;
        high_sum += moved;
    }

    while (high.size() > low.size()) {
        int moved = *high.begin();
        high.erase(high.begin());
        low.insert(moved);
        high_sum -= moved;
        low_sum += moved;
    }
}


ll calculate_cost(multiset<int>& low, multiset<int>& high, ll low_sum, ll high_sum) {
    int median = *low.rbegin();
    ll cost = (ll)median * low.size() - low_sum + high_sum - (ll)median * high.size();
    return cost;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    multiset<int> low, high;
    ll low_sum = 0, high_sum = 0;

    vector<ll> results;

    for (int i = 0; i < n; ++i) {
       
        add_number(arr[i], low, high, low_sum, high_sum);
        rebalance(low, high, low_sum, high_sum);

       
        if (i >= k) {
            remove_number(arr[i - k], low, high, low_sum, high_sum);
            rebalance(low, high, low_sum, high_sum);
        }

        
        if (i >= k - 1) {
            ll cost = calculate_cost(low, high, low_sum, high_sum);
            results.push_back(cost);
        }
    }

    for (ll result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
