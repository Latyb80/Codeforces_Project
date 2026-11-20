#include <iostream>
using namespace std;

int main()
{
    // Можно забыть про пифагора и эту формулу расстояние просто должно 
    // быть равным R значит просто вычтем R из одной координаты роутера и всё
    // это наше расстояние ровно R
    //
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y, r;
        cin >> x >> y >> r;
        cout << x << " " << y - r << "\n";
    }
}

