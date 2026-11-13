#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& c : a)cin >> c;
        vector<bool> pos(n+67,0);
        int cou = 0;
        for (int c : a) {
            if (pos[c + 1]) {
                cou++;
            }
            pos[c] = 1;
        }
        cout << cou << "\n";
    }
}


