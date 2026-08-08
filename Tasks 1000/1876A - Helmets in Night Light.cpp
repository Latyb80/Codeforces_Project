#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Здесь главное это отбросить всю воду 
    // Главное что можно выделить это то что мы можем
    // сами оповестить жителей или нанять жителя оповестить других
    // Уже на это этапе размышлений появляются две ветки первая
    // мы оповещаем всех сами она сработает в том случае если все 
    // жители слишком дорогие нежели 'p'
    // Вторая ветка сложнее тут мы должны набирать оповещения с жителей
    // до того момента пока их цена не станет равна или больше 'p' 
    // Если после этого ещё остались неведующие то просто наберём их через 'p'
    int t;
    cin >> t;
    while (t--) {
        long long n,p,mini = 10e6;
        cin >> n >> p;
        vector<pair<long long, long long>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].second;     
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            if (a[i].first < mini)mini = a[i].first;
        }
        if (mini >= p) {
            cout << p * n << endl;
            continue;
        }
        long long ost = n-1,i = 0;
        long long sum = p;
        sort(a.begin(), a.end());
        while (true) {
            if (ost <= 0 || a[i].first >= p)break;
            long long once = min(ost, a[i].second);
            sum += once * a[i].first;
            ost -= once;
            i++;
        }
        cout << sum + ost * p << endl;
    }
}


//1876A *1000



