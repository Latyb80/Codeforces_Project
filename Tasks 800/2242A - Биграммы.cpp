#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool predicat(int x) {
    return x >= 2;
}
bool predicat1(int x) {
    return x >= 3;
}

int main()
{
    // Тут всё выглядит максимально сложно буквы, какое-то кол-во но на самом деле
    // от нас просят одно просто составить две одинаоквые пары
    // Составить две одинаковые пары мы можем тольок двумя сопособами:
    // - Составить из двух букв по типу ab ab
    // - Составить из одной буквы по типу aa aa НО так как биграммы могут наслаиваться
    //   подобная запись будет тоже корректна aaa
    // Из этого выходит что нам нужно хотя бы 3 одинаковые буквы (то есть просто одна цифра три в массиве)
    // или по две разные буквы (то есть просто две цифры два в массиве)
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        if (find_if(a.begin(), a.end(), predicat1) != a.end() || count_if(a.begin(), a.end(), predicat) >= 2) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}


//2242A *800

