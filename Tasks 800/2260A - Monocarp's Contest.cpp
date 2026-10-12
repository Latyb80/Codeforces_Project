#include <iostream>
using namespace std;

int main()
{
	// Суть задачи в том что нам просто нужно поменять цифры в конце и вначале
	// у нас нету ограничений на обмен поэтому нам просто нужно иметь 
	// хотя бы столько нулей между началом и концом сколько единиц вначале и в конце
	int t;
	cin >> t;
	while (t--) {
		int n,zero, need;
		zero = need = 0;
		cin >> n;
		need += []() {int a; cin >> a; return a; }();
		for (int i = 1; i < n - 1; i++) {
			int a;
			cin >> a;
			(!a)? zero++ : zero;
		}
		need += []() {int a; cin >> a; return a; }();
		if (zero < need)cout << -1 << "\n";
		else cout << need << "\n";
	}
}




