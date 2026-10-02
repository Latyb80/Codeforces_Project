#include <iostream>
#include <string>
using namespace std;

using ll = long long;

pair<bool, int> MainLogic(const string& s, ll n, ll p);
int main()
{
    // В этой задаче главное это лишь два сценария робота а именно
    // первый это когда робот не достигает 0 и выключается в таком случае всегда 0 в ответе
    // второй это когда робот достигает нуля тогда ответ минимум 1 если с первым
    // вариантом всё понятно то второй можно разделить ещё на два один из них
    // это когда робот достиг 0 с точки 'x' но начиная с 0 не может его достичь и выключается
    // или этот вариант уместен когда робот достигает снова 0 более чем за 'k' секунд
    // в ином же случае робот возратится на 0 и каждый его цикл ходов будет одинаков 
    // из чего следует что мы можем просто вычесть из времени 'k' время потраченно на
    // начало с 'x' точки и разделить это на кол-во ходов необходимых для того чтобы встать на 0
    // после 0 делим с округлением вниз ведь неполный круг не достигнет 0
    int t;
    cin >> t;
    while (t--) {
        ll  n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        pair<bool, int> beg = MainLogic(s, n, x);
        pair<bool, int> end = MainLogic(s, n, 0);
        if (!beg.first || beg.second > k) {
            cout << 0 << "\n";
            continue;
        }
        ll ans = 1;
        k -= beg.second;
        if (end.first) {
            ans += (k / end.second);
        }
        cout << ans << "\n";
    }
}
pair<bool, int> MainLogic(const string& s, ll n, ll p) {
    ll pos = p;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L')p--;
        else p++;
        if (p == 0)
            return { true, i + 1 };
    }
    return { false, 0 };
}


//2070B *1100
