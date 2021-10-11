#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>

using namespace std;
bool check(vector<int>& arr, int k) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == i + 1) count++;
    }
    return (count == k);
}
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int tests;
    cin >> tests;
    while (tests--) {
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        for (int i = 1; i <= k; i++) {
            ans.push_back(i);
        }
        if (k == n) {
            for (auto i : ans) cout << i << " ";
            cout << "\n";
        }
        else {
            ans.push_back(n);
            for (int i = k + 1; i < n; i++) ans.push_back(i);
            if (check(ans, k)) {
                for (auto i : ans) cout << i << " ";
                cout << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
}