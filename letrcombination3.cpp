#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int L = s.length();
    for (int ctr = 1; ctr < (1 << L); ctr++) {
        string combination = "";

        for (int sh = 0; sh < L; sh++) {
            if ((ctr & (1 << sh)) > 0) {
                combination += s[sh];
            }
        }
        
        cout << combination << endl; 
    }
}

int main() {
    string input;
    getline(cin, input);
    solve(input); 

    return 0;
}
