// Hint: Don't look, No need, Let'em Play.

#pragma optimize("O2")
#include <bits/stdc++.h>
#include "bits/stdc++.h"

using namespace std;

#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#ifndef bhupixb
    #define var(...)
    #define stl(...)
#endif

void solve() {
    int n = rand() % 10 + 3;
        cin >> n;
    vector<int> v(n);
    for (int &x: v) cin >> x;
    sort(v.begin(), v.end() - 1);
    for (int x: v) cout << x << ' ';
}

signed main() {
    fast;
    srand(time(0));
    int t = 1; // cin >> t;
    while (t--) {
        solve();
    }


  return 0;
}
