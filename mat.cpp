#include <bits/stdc++.h>
using namespace std;

bool rec(string& s, string& p, int n, int m, vector<vector<int>>& dp) {
    if (n == 0 && m == 0) return true;
    if (m == 0 && n > 0) return false;
    if (n == 0 && m > 0) {
        for (int j = 0; j < m; j++) {
            if (p[j] != '*') return false;
        }
        return true;
    }

    if (dp[n][m] != -1) return dp[n][m];

    if (p[m - 1] == s[n - 1] || p[m - 1] == '?') {
        return dp[n][m] = rec(s, p, n - 1, m - 1, dp);
    } else if (p[m - 1] == '*') {
        return dp[n][m] = rec(s, p, n - 1, m, dp) || rec(s, p, n, m - 1, dp);
    } else {
        return dp[n][m] = false;
    }
}
int main() {
    string s = "cd";
    string p = "?a";
    int n = s.size();
    int m = p.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return rec(s, p, n, m, dp);
}