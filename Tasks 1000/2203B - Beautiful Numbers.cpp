#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // Чтобы получить подобное равенство F(F(x))=F(x) гарантированно
    // В любом случае нам нужно довести сумму чисел до < 10 
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        // Подсчёт суммы цифр
        int sum = 0;
        for (int i = 0; i < x.length(); i++) {
            sum += x[i] - '0'; // Чтобы получить число из символа надо вычесть '0' по таблице ASCII 
        }
        x[0]--;
        if (sum < 10)cout << 0 << endl;
        else {
            // Чтобы быстрее всего получить сумму 10 нам необходимо удалять самые большие цифры
            sort(x.rbegin(), x.rend());
            sum -= 9;// Разница которую надо убрать
            int count = 0,i = 0;
            while (sum > 0) {
                sum -= x[i] - '0';
                i++;
                count++;
            }
            cout << count << endl;

        }
    }
}

