#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // В этой задаче нам нужно сравнить чтобы буквенные повторки были равны цифровым и наоборот
    // Для этого нам нужно два вектора пар один отсортируем по первой паре(цифрам) после чего все повторки
    // цирофые будут рядом и нам остаётся только их найти и проверить одинаковы ли их буквы
    // Со вторым вектором пар делаем всё тоже самое только сортируем по второй паре(буквам)
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, char>> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
        }// Считываем начальный шаблон
        int m;
        cin >> m;
        while (m--) {
            bool accepted = true;
            string s;
            cin >> s; // Так как строка может быть больше n сначало её проверяем
            if (s.size() == n) {
                for (int i = 0; i < n; i++) {
                    a[i].second = s[i];
                }// Если строка подходит по размеру то добавляем её
                vector<pair<int, char>> bukvi = a; // Создаём два вектора пар про которыз писалось выше
                vector<pair<int, char>> cifri = a;
                sort(bukvi.begin(), bukvi.end());
                sort(cifri.begin(), cifri.end(), [](const pair<int, char> &a, const pair<int, char> &b) {return a.second < b.second; });
                for (int i = 0; i < n - 1; i++) {
                    if (bukvi[i].first == bukvi[i + 1].first && bukvi[i].second != bukvi[i+1].second) {
                        accepted = false;
                    }
                }// Проверяем эти вектора первый по первому условию задачи второй по второму
                for (int i = 0; i < n - 1; i++) {
                    if (cifri[i].second == cifri[i + 1].second && cifri[i].first != cifri[i + 1].first) {
                        accepted = false;
                    }
                }
                if (accepted)cout << "YES\n"; // Если в итоге оба вектора прошли свои условия 
                else cout << "NO\n";          // accepted остаётся true и выводим YES
            }
            else cout << "NO\n"; // Если изначально строка была больше или меньше n
        }
    }
}


//2000C *1000


