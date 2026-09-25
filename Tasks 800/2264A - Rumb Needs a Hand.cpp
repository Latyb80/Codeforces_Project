#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// Суть этой задачи в том что нам нужно развернуть
	// неугодные нам цифры которые не соответствуют возрастанию
	// но если эти все цифры не убывают то можно доказать что за одну 
	// разрешённую операцию мы это не исправим ведь нам нужно чтобы после
	// разворота они все соответствовали возрастанию что значит что этого 
	// не добиться если их изначальная сортировка была не обратной возрастнанию
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> b;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a != i + 1)b.push_back(a);
		}
		bool input = is_sorted(b.begin(), b.end(), greater<int>());
		cout << ((input) ? "YES\n" : "NO\n");
	}
}



