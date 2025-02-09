#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int maxi = 1;
    int count = 1;
    char prev = s[0];
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == prev) {
            count++;
        }
        else{
            maxi = max(count,maxi);
            count = 1;
            prev = s[i];
        }
    }

    maxi = max(count,maxi);

    cout << maxi << endl;
}