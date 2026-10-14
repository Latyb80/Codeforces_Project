#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using ll = long long;

int main()
{
    // Главный инсайт задачи заключается в том что побитовое И для каждого 
    // нынешнего и следующего числа должно равняться нынешнему из массива 'b'
    // это значит что все числа массива 'a' должны хранить биты нужные для 
    // b[i] и b[i-1] а это уже лперация побитового ИЛИ
    // НО стоит отметить что если числа возрастают то И не работает и логика с ИЛИ рушится
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll fir, sec = -67;
        vector<ll> a(n);
        vector <ll> b(n-1);
        for (int i = 0; i < n-1; i++)cin >> b[i];
        a[0] = b[0];
        for (int i = 1; i < n - 1; i++) {
            a[i] = b[i] | b[i - 1];
        }
        a[n - 1] = b[n - 2];
        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            if ((a[i] & a[i + 1]) != b[i]) {
                ok = false;
                break;     
            }
        }
        if (!ok) { cout << -1 << "\n"; continue; }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}


