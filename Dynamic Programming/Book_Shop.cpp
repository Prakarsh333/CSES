#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> price(n), pages(n);
    for (int i = 0; i < n; i++) cin >> price[i];
    for (int i = 0; i < n; i++) cin >> pages[i];

    vector<int> dp(k + 1, 0); // Space optimized DP array

    for (int i = 0; i < n; i++) {
        for (int j = k; j >= price[i]; j--) { // Reverse iteration
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }

    cout << dp[k] << endl; // Maximum pages that can be obtained
}
