#include <iostream>
using namespace std;

int main()
{
    // Это шуточная задача квадрат можно составить только если все стороны равны
    int t = []() {int x;cin >> x;return x;}();
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << ((min({a,b,c,d}) == max({ a,b,c,d })) ? "YES" : "NO") << endl;
    }
}

//2167A *800
