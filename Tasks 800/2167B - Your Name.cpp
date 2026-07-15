#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        string t, s;
        cin >> t >> s;
        sort(t.begin(), t.end());sort(s.begin(), s.end());
        cout << ((t == s) ? "YES" : "NO") << endl;

    }
}

