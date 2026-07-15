#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // В этой задаче у нас есть два пути а именно сортировка
    // и оставить как было и на обоих этапах необходима проверка 
    // По типу все ли числа A больше чисел B 
    // Чтобы выбрать вариант нужно проверить возможно ли 
    // составить массив B без сортировки A и этот вариант если он возможен будет гарантированно выгоднее
    // Если он невозможен то нам остаётся варинат с сортировкой
    int t;
    cin >> t;
    while (t--) {
        int n, c,count = 0;
        cin >> n >> c;
        bool accepted = false,finaly = false;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            (a[i] >= b[i])? accepted : accepted = true;// Проверка подходит ли начальный массив
        }
        if (accepted) { // Если не подошёл сортируем оба массива ведь мы можем двигать A произвольно и в любом случае подставили бы эти значения 
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            count += c;
            for (int i = 0; i < n; i++) {
                if ((a[i] - b[i]) > -1)count += a[i] - b[i];
                else finaly = true;
            }
        }
        else { // Если подошёл просто проверяем и считаем
            for (int i = 0; i < n; i++) {
                if ((a[i] - b[i]) > -1)count += a[i] - b[i];
                else finaly = true;
            }
        }
        cout << ((finaly) ? -1 : count) << endl;
    }
}


//2238A *800



