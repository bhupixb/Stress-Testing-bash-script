#include <iostream>
#include <vector>

using namespace std;

// Takes an array of integers and sort them.
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int negative = 0;

    for (int &x: arr) {
        cin >> x;
    }

    sort(arr.begin(), arr.end());
    for (int x: arr) {
      cout << x << ' ';
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
