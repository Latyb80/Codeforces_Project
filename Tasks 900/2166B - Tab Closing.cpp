#include <iostream>
using namespace std;

int main()
{
    // Суть в обработке пары крайних случаев а именно это когда изнчально b уже меньше
    // или наоборот когда b изначально больше даже 'a' в этих случаях мы выводим 1
    // в любых других 2
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        cout << ((b >= a || a >= b * n) ? 1 : 2) << "\n";
    }
}

