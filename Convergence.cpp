
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    
    sort(arr.begin(), arr.end());
 
    int calls = 0;
    int left = 0;
    int right = n - 1;
 
    
    while (left < right) {
        if (arr[left] == arr[right]) {
            
            break;
        }
        
        
        calls++;
        left++;
        right--;
    }
 
    cout << calls << "\n";
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
