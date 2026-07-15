#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        bool accepted = true;
        sort(s.begin(), s.end());
        for (int i = 1; i < s.length(); i++) {
            if (s[i - 1] + 1 != s[i]) {
                accepted = false;
            }
        }
        cout << ((accepted) ? "Yes\n" : "No\n") << endl;
    }
}


//1144A *800