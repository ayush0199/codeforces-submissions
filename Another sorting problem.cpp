
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    
    long long k = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            k = max(k, a[i] - a[i + 1]);
        }
    }
 
    
    if (k == 0) {
        cout << "Yes\n";
        return;
    }
 
    
    vector<long long> b(n);
    b[0] = a[0]; 
    for (int i = 1; i < n; i++) {
        
        if (a[i] >= b[i - 1]) {
            b[i] = a[i];
        } 
        
        else {
            b[i] = a[i] + k;
            
            if (b[i] < b[i - 1]) {
                cout << "No\n";
                return;
            }
        }
    }
 
    
    cout << "Yes\n"/;
}
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}
