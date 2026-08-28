#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // В этой задаче вся суть в том что во первых
    // если есть хоть одно нечётное мы можем забрать все чётные поля
    // ведь косилке вообще на них безразницы но вот с нечётными
    // уже по другому для них мы можем забрать только половину с округлением вверх
    // ведь на каждом чётном поле косилка будет глохнуть но по условию
    // мы можем посещать поля как захотим поэтому в эти нечётные посещения
    // мы просто скосим все наибольшие поля тем самым нам просто нужно сложить
    // половину количества нечётных полей и мы возьмём самые большие поля
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long sum = 0;
        cin >> n;
        vector<long long> even;
        vector<long long> odd;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            if (a % 2 == 0) {
                sum += a;
                even.push_back(a);
            }
            else odd.push_back(a);
        }
        if (odd.size() == 0) {
            cout << 0 << "\n";
            continue;
        }
        sort(odd.begin(), odd.end(), greater<long long>());
        for (int i = 0; i < (odd.size() + 1) / 2; i++) {
            sum += odd[i];
        }
        cout << sum << "\n";
    }
}


//2148D *1000