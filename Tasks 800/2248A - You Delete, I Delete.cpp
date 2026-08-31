#include <iostream>
#include <string>
using namespace std;

int main()
{
    // В этой задаче нужно просто понять что выгодно делать Алисе и Бобу
    // так как одна хочет максимум а другой минимум то следовательно
    // Алиса захочет убрать нули из начала чтобы единицы были ближе
    // а Боб наоборот захочет убрать единицы чтобы нули были ближе
    // В итоге просто Алиса уберёт первый ноль а Боб первую единицу
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        size_t pos0 = s.find('0');
        if (pos0 != string::npos) {
            s.erase(pos0, 1);
        }
        size_t pos1 = s.find('1');
        if (pos1 != string::npos) {
            s.erase(pos1, 1);
        }
        cout << s << "\n";
    }
}


//2248A *800
