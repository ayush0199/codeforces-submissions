#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    long long x, s;
    cin >> n >> x >> s;
 
    string u;
    cin >> u;
 
    __int128 eia = 0;
    long long X = x;
    long long C = 0;
    long long ans = 0;
 
    for (int i = 0; i < n; ++i) {
        char c = u[i];
 
        if (c == 'I') {
            if (X > 0) {
                X--;
                eia += (s - 1);
                ans++;
            }
        }
        else if (c == 'E') {
            if (eia > 0) {
                eia--;
                ans++;
            }
            else if (C > 0 && X > 0) {
                C--;
                X--;
 
                eia += (s - 1);
                ans++;
            }
        }
        else if (c == 'A') {
            if (eia > 0) {
                eia--;
                ans++;
                C++;
            }
            else if (X > 0) {
                X--;
                eia += (s - 1);
                ans++;
            }
        }
    }
 
    cout << ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
 
    return 0;
}
