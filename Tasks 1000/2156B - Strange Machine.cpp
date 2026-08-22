#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // Это задача очень сложная настолько что даже модераторы сайта решили 
    // будто она сложная поставив тег бинарный поиск 
    // НО на самом деле нужно лишь приглядется к ограничениям ведь они просто
    // смешные если подумать a <= 10^9 но что делает B в строке
    // оно делит на 2 что значит даже a = 10^9 оно доведёт до 0 всего за 30 шагов
    // это значит что мы можем просто симулировать процесс так как нам показывают 
    // НО и тут есть исключение если нету B то на крупных числах программа 
    // улетит в TimeLimit поэтому нужно просто добавить один if 
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> req(q);
        for (int i = 0; i < q; i++) {
            cin >> req[i];
        }
        if (s.find('B') == string::npos) {
            int couA = s.length();
            for (int i = 0; i < q; i++) {
                cout << req[i] << "\n";
            }
            continue;
        }
        for (int i = 0; i < q; i++) {
            int cou = 0;
            while (req[i] > 0) 
            {
                for (char c : s) 
                {
                    if (req[i] <= 0)break;
                    else cou++;
                    if (c == 'A')req[i]--;
                    else req[i] /= 2;
                }
            }
            cout << cou << "\n";
        }
    }
}


//2156B *1000

