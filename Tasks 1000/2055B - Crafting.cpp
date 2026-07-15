#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    // Примечание: под дефицитом подразумевается недостающее кол-во материала
    //             а под профицитом подразумевается кол-во переизбытка материала
    // В этой задаче нам нужно чтобы все элементы 'a' массива стали больше элементов
    // 'b' массива с тем же индексом во первых мы можем доказать что невозможно
    // получить из массива 'а' массив который подойдёт по условию если нам нужно добрать
    // два числа ведь если мы увеличиваем одно уменьшается другое 
    // Во вторых если нам нужно добрать одно число или по другому дефицит то минимальный
    // профицит обязан быть больше или равен дефициту иначе он сам уйдёт в дефицит и тогда
    // мы гаратированно не сможем исправить 'a' массив 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        bool pizdyuk = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (a[i] - b[i] < 0)pizdyuk = false;
        }
        if (pizdyuk) {
            cout << "YES\n";
        }
        else {
            long long deficit, proficit;
            deficit = proficit = 0;
            int cou = 0;
            long long min = 1e18, mini = 1e18;
            for (int i = 0; i < n; i++) {
                if (a[i] - b[i] < min && a[i] - b[i] < 0) {
                    min = a[i] - b[i];
                    deficit = abs(a[i] - b[i]);
                    cou++;
                }
                else if (a[i] - b[i] < 0)cou++;
            }
            if (cou > 1) { cout << "NO\n"; continue; }
            for (int i = 0; i < n; i++) {
                if (a[i] - b[i] < mini && a[i] - b[i] >= 0) {
                    mini = a[i] - b[i];
                    proficit = a[i] - b[i];
                }
            }
            if (deficit <= proficit)cout << "YES\n";
            else cout << "NO\n";
        }
    }
}


//2055B *1000

