#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        for (char c : t) freq[c]--;
        bool ok = true;
        for (auto it : freq) {
            if (it.second != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
