#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 1; i < n-1; i++) {
        if(a[i] == 0) {
            if(a[i-1] == a[i+1]) ans += 3;
            else ans += 1;
        }
    }
}