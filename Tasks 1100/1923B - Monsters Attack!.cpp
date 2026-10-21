#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    //  Суть в этой задаче в том что допустим мы будем стрелять только тогда
    // когда монстр впритык к нам то есть на 1 или -1 координатах только тогда
    // мы можем стрелять но допустим мы видели будущее и если монстр подошёл к нам
    // черех 'x' сек то мы могли выстрелить по этому монстру и по всем остальным которые
    // к нам подошли ровно x*k раз если бы стреляли по ним сразу формула выводится 
    // через абстрацию и логично следует что если k*x выстрелов не хватит это поражение
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) {
            ll n, k;
            cin >> n >> k;
            vector<pair<ll, ll>> v(n);
            for (int i = 0; i < n; i++) cin >> v[i].second;
            for (int i = 0; i < n; i++) {
                cin >> v[i].first;
                v[i].first = abs(v[i].first);
            }
            sort(v.begin(), v.end());
            ll s = 0;
            bool ok = 1;
            for (int i = 0; i < n; i++) {
                s += v[i].second;
                if (s > v[i].first * k) {
                    ok = 0;
                    break;
                }
            }
            cout << (ok ? "YES\n" : "NO\n");
        }
    }
}


//1923B *1100
