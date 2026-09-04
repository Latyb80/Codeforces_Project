#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

// Суть этой задачи это максимальн просатя комбинаторика
// чтобы не получить ряд одних цветов нам нужно поставить
// хотя бы по одному другому цвету в каждый ряд или столбец
// если же кол-во повторяющихся конфет станет более этого то расставить их уже
// будет невозможным поэтому количество самых частых конфет не должно
// превышать n^n-n
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> counts;
        int max_freq = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int color;
                cin >> color;
                counts[color]++;
                max_freq = max(max_freq, counts[color]);
            }
        }
        int limit = n * (n - 1);
        if (max_freq > limit) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}


//2208A *800
