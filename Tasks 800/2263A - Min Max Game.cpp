#include <iostream>
using namespace std;

int main()
{
    // Суть в том что за каждый ход как Бесси так и Елси убирают
    // по одной цифре оппонента что значит это просто игра на выживание
    // выигрывает тот чьих цифр больше или Бесси если они равны ведь ходит она первой
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int one, zero;
        one = zero = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            (a) ? ++one : ++zero;
        }
        cout << ((one >= zero) ? "Bessie\n" : "Elsie\n");
    }
}


