#include <bits/stdc++.h>
using namespace std;

const string subseqs[] = { "00", "25", "50", "75" };
const int INF = 100;

int solve_recursive(string &s, int sptr, string t, int tptr) {
    // Base cases
    if (tptr < 0) return 0;                // All characters of `t` are matched
    if (sptr < 0) return INF;               // No more characters in `s` to match with `t`
    
    // Recursive case
    if (s[sptr] == t[tptr]) {
        // Either match this character or skip it
        return min(1 + solve_recursive(s, sptr - 1, t, tptr), 
            solve_recursive(s, sptr - 1, t, tptr - 1));
    } else {
        // Skip the current character in `s`
        return 1 + solve_recursive(s, sptr - 1, t, tptr);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;
        
        int ans = INF;
        for (auto e : subseqs) {
            // Try to form each target subsequence using recursion
            ans = min(ans, solve_recursive(n, n.length() - 1, e, e.length() - 1));
        }

        cout << (ans == INF ? -1 : ans) << '\n';
    }

    return 0;
}
