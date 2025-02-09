#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int maxi = a[0];
    long long ans = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] < maxi) {
            ans += maxi - a[i];
        }
        else maxi = a[i];
    }

    cout << ans << endl;
}