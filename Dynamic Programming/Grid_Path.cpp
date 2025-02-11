#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

signed main() {
    int n; cin >> n;
    vector<vector<bool>> g(n,vector<bool>(n,false));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char c; cin >> c;
            if(c == '*') g[i][j] = true;
        }

    }

    if(g[0][0] == true) {
        cout << 0 << endl;
        return 0;
    }

    vector<vector<int>> dp(n,vector<int>(n,0));
    
    for(int i = 0; i < n; i++){
        if(g[i][0] == true) break;
        else dp[i][0] = 1;
    }
    for(int i = 0; i < n; i++) {
        if(g[0][i] == true) break;
        else dp[0][i] = 1;
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(g[i][j] == false) {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
            }
        }
    }

    cout << dp[n-1][n-1] << endl;




}