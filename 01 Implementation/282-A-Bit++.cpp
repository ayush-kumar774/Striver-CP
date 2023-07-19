#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n ;
    cin >> n ;
    int ans = 0 ;
    string str ;
    while (n--) {
        cin >> str;
        if (str == "X++" or str == "++X") ans++ ;
        else if (str == "X--" or str == "--X") ans--;
    }
    cout << ans << endl ;
}

int32_t main() {
    int testcases = 1 ;
    
    // cin >> testcases ;
    while(testcases --) {
        solve();
    }
    return 0 ;
}