#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    // Мы никак не можем повлиять на первый и последние элементы поэтому только
    // от них зависит НОД массива ведь он гарантированно или будет 1 или будет 
    // НОД первого и последнего числа тоже причём больше их НОД никак не станет
    // при этом убирая все прочие элементы мы гарантируем защиту от случаев НОД 1
    // когда числа никак не соприкасаются 
    //
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& c : a)cin >> c;
        cout << gcd(a[0], a.back()) << "\n";
    }
}


