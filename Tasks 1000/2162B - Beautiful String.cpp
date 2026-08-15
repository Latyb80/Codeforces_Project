#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // Типо здесь от нас почти ничего не просят
    // единственное что нам нужно так это просто
    // сделать палиндром без ограничений мы можме
    // просто убрать все нули или единицы 
    // Почему задача рейтинга 1000 настолько странно лёгкая ?
    // Этот код точно рабочий хоть и кажется что нет
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << count(s.begin(), s.end(), '0') << "\n";
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')cout << i + 1 << " ";
        }
        cout << "\n";
    }
}


//2162B *1000
