#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n-1; i++) {
        long long temp; cin >> temp;
        sum += temp;
    }

    long long original_sum = (n*(n+1))/2;

    cout << original_sum - sum << endl;
}