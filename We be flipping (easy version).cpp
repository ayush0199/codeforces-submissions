
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<int> ans;
 
        
        for (int i = 0; i < n; i++) {
 
            
            if (a[i] > 0) {
 
                
                ans.push_back(i + 1);
 
 
                for (int j = 0; j <= i; j++) {
                    a[j] = -a[j];
                }
            }
        }
 
        cout << ans.size() << "\n";
 
        for (int x : ans) {
            cout << x << " ";
        }
 
        cout << "\n";
    }
 
    return 0;
}
