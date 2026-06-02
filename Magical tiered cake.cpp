#include <iostream>
#include <vector>
 
using namespace std;
 
 
struct Move {
    int id, from, to;
};
 
 
void solve_hanoi(int k, vector<int>& target, vector<int>& pos, const vector<int>& a, vector<Move>& moves) {
    if (k == 0) return;
 
    if (pos[k] == target[k]) {
        solve_hanoi(k - 1, target, pos, a, moves);
    } else {
        int other = 6 - pos[k] - target[k];
        vector<int> mid = target;
 
        for (int i = 1; i <= a[k]; ++i) {
            mid[i] = pos[k];
        }
        for (int i = a[k] + 1; i < k; ++i) {
            mid[i] = other;
        }
 
        solve_hanoi(k - 1, mid, pos, a, moves);
        
        moves.push_back({k, pos[k], target[k]});
        pos[k] = target[k];
 
        solve_hanoi(k - 1, target, pos, a, moves);
    }
}
 
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n + 1);
    bool possible = true;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] > i - 1) {
            possible = false;
        }
    }
 
    if (!possible) {
        cout << "NO\n";
        return;
    }
 
    vector<int> pos(n + 1, 1);
    vector<int> target(n + 1, 3);
    vector<Move> moves;
    moves.reserve(1 << n);
 
    solve_hanoi(n, target, pos, a, moves);
 
    cout << "YES\n";
    cout << moves.size() << "\n";
    for (const auto& m : moves) {
        cout << m.id << " " << m.from << " " << m.to << "\n";
    }
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
