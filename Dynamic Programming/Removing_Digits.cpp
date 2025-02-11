/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

vector<int> digits(int n) {
    vector<int> digit;
    int temp = n;
    while(temp != 0) {
        digit.push_back(temp%10);
        temp = temp/10;
    }
    
    return digit;
}

int solve(int n) {
    int count = 0;
    int temp = n;
    
    while(temp != 0) {
        vector<int> dit = digits(temp);
        sort(dit.begin(),dit.end());
        reverse(dit.begin(),dit.end());
        temp = temp - dit[0];
        count++;
    }
    
    return count;
}

int main()
{
    int n; cin >> n;
    cout << solve(n) << endl;
}