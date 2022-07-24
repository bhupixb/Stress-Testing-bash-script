#include <iostream>
#include <vector>

using namespace std;

// Takes an array of integers and sort them with off by 1 error.
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int negative = 0;

    for (int &x: arr) {
        cin >> x;
    }

    // Notice + 1 here, we are ignoring first element of array during sort to intentionally
    // make the logic incorrect.
    sort(arr.begin() + 1, arr.end());
    for (int x: arr) {
      cout << x << ' ';
    }
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
