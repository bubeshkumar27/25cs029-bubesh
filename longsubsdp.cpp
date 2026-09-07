#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int n=a.length(),m=b.length(),max = 0;
    vector<vector<int>> dp(n+1,vector<int>(m+1));

    for(int i =1; i<= n; i++){
        for(int j = 1; j <= m;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
                max = std::max(max,dp[i][j]);
            }
             else{
                dp[i][j] = 0;
             }
        }
    }
    cout << max << endl;
}
