#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // В этой задаче всё просто нам нужно просто посчитать сколько раз менялась полярность
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a.erase(unique(a.begin(), a.end()), a.end());// Здесь unique удаляет все ПОРДРЯД идущие повторы
    cout << a.size() << endl;// В итоге в массиве остаётся только по одному элементу каждой смены полярности и это ответ
}


//344A *800