#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // В этой задаче главное свойство это то что в любом варианте 
    // событий хп монстров останется равно их хп по модулю 'k' это можно
    // доказать тем что мы всегда уменьшаем на 'k' наибольшее поэтому каждое
    // хп будет снято вплоть до остатка на 'k' но тут нужно добавить что
    // если число делится нацело на 'k' то его остаток это будет не ноль а 'k'
    // ведь ему не хватает ровно 'k' вычесть и так как мы всегда убираем сначала
    // максимальные то сперва уйдут числа с самым большим остатком или остатком ноль
    // вплоть до остатка 1 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<pair<long long,long long>> a(n);
        for (int i = 0; i < n; i++) {
            long long b;
            cin >> b;
            a[i].first = -(b % k);
            if (a[i].first == 0)a[i].first = -k;
            a[i].second = i + 1;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            cout << a[i].second << " ";
        }
        cout << "\n";
    }
}


