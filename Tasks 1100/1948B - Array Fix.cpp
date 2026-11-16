#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;

int main()
{
    // Суть задачи заключается в том что мы должны выровнять массив
    // выполнять операцию для нас имеет смысл только втом случае если нынешнее
    // число более чем следующее тогда мы его разбираем но ведь за этим числом также
    // стояли числа которые могут стать более разобраного числа поэтому идём с конца и 
    // каждый раз когда число будет более разбираем его так мы учтём моменты когда после разбора
    // одного числа по цепной реакции нужно разобрать остальные
    //
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b;
        for (int& c : a)cin >> c;
        reverse(a.begin(), a.end());
        b.pb(a[0]);
        for (int i = 1; i < n; i++) {
            int c = a[i];
            if (c <= b.back() || c < 10)b.pb(c);
            else b.pb(c % 10), b.pb(c / 10);
        }
        if (is_sorted(b.rbegin(), b.rend()))cout << "YES\n";
        else cout << "NO\n";
    }
}
