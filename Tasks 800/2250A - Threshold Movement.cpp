#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    // Суть в том что нам нужно поменять все элеменьы местами иначе
    // они уйдут в зоны 0 и n+2 что портит всё это значит что нужно найти число которое 
    // сдвинет каждый элемент каждой пары в разные стороны то есть это число в интервале между правым
    // и левым звеном каждой не пересекающейся пары и такое число входящее в интервалы
    // должно войти в любой интервал любой пары 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0) {
            ll val;
            while (n--) cin >> val;
            cout << "NO\n";
            continue;
        }
        ll a, b;
        ll x = 2e18, y = 0;
        bool ok = true;
        for (int i = 0; i < n; i += 2) {
            cin >> a >> b;
            if (a <= b) ok = false;
            x = min(x, a);
            y = max(y, b);
        }
        if (ok && (x - y >= 2)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}



