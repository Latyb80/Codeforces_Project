#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // В этой задаче нам просто выгодно сделать
    // один множитель кратным k и выгоднее всего сдлеать тот
    // который уже ближе всего к k 
    // Но для k = 4 есть другой вариант если есть два чётных числа
    // то это 0 операций ведь тогда произведение будет кратно 4
    // и если есть только одно чётное мы просто можем сделать ещё одно за одну операцию
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int cou = 0;
        int ans = k; 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 0) cou++;
            int needed = (k - (a % k)) % k;
            ans = min(ans, needed);
        }
        if (k == 4) {
            int ops = max(0, 2 - cou);
            ans = min(ans, ops);
        }
        cout << ans << "\n";
    }
}


//1883C *1000
