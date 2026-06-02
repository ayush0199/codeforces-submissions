#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        long long sum = 0;
        long long best = (long long)4e18;
 
        for (int i = 0; i < n; i++) {
            sum += a[i];
            best = min(best, sum / (i + 1));
 
            cout << best;
            if (i + 1 < n) cout << ' ';
        }
        cout << '\n';
    }
 
    return 0;
}
