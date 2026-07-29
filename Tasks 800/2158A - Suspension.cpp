#include <iostream>
using namespace std;

int main()
{
    // В этой задаче понятно что мы можем
    // дисквалифицировать только 'r' и y/2 игроков ведь
    // красная - сразу выбыл жёлтая - нужно две штуки и выбыл
    // НО также кол-во выбывших не может превышать изначальное кол-во игроков
    int t;
    cin >> t;
    while (t--) {
        cout << []() {int n, y, r; cin >> n >> y >> r; int result = y / 2 + r; return (result <= n) ? result : result - (result - n); }() << endl;
    }
}


//2158A


