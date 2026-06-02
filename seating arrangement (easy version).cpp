#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, x, s;
        cin >> n >> x >> s;
 
        string eia;
        cin >> eia;
 
        vector<int> dp(x + 1, -1);
        dp[0] = 0;
 
        for (char c : eia) {
            vector<int> ndp = dp; // skip
 
            if (c == 'I' || c == 'A') {
                for (int j = 0; j < x; j++) {
                    if (dp[j] >= 0) {
                        ndp[j + 1] = max(ndp[j + 1], dp[j] + 1);
                    }
                }
            }
 
            if (c == 'E' || c == 'A') {
                for (int j = 1; j <= x; j++) {
                    if (dp[j] >= 0) {
                        int mx = min(dp[j] + 1, j * s);
                        ndp[j] = max(ndp[j], mx);
                    }
                }
            }
 
            dp.swap(ndp);
        }
 
        int ans = 0;
        for (int v : dp) ans = max(ans, v);
        cout << ans << '\n';
    }
 
    return 0;
}
