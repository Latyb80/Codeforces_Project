#include <iostream>
#include <string>
using namespace std;

// Здесь суть задачи в том что наше выбранное число
// можем пойти только по трём сценариям:
// 1) Это когда буква разделяло две одинаковые островки повторяющихся букв
// в этом варианте буква уменьшит длину на два уберёт себя и сожмёт два островка после чего он станет одной буквой
// 2) Это если рядом с числом нету его повторок тогда если его убрать длина умнньшится на один
// 3) Это если оба варианта не наши для себя ни одного числа значит длина массива неизменна
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int base_len = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) base_len++;
        }
        bool mast = false, grandmast = false;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
                if (s[i - 1] == s[i + 1]) {
                    grandmast = true; 
                    break;            
                }
                mast = true;
            }
        }
        cout <<((grandmast) ? base_len - 2 : (mast) ? base_len - 1 : base_len) << "\n";
    }
}


//2254b *900