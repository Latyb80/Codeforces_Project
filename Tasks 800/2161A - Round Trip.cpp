#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // В этой задаче нужно только подметить пару нюансов
    // во первых нас не просят сохранять рейтинг а во вторых нас просят
    // чтобы он был ниже чем 'X' тогда что нам мешает просто всегда 
    // проигрывать тем самым участвуя в максимальном количестве раундов - рейтинговых
    // Значиь мы просто везде проигрываем и проверяем достаточно ли у нас маленький рейтинг
    int t;
    cin >> t;
    while (t--) {
        long long r, x, d, n;
        cin >> r >> x >> d >> n;
        string s;
        cin >> s;
        long long size = s.length();
        for (char c : s) {
            if (c == '1') {
                r = max(0LL , r - d);
            }
            else {
                if (r >= x)size--;
            }
        }
        cout << size << "\n";
    }
}


//2161A *800