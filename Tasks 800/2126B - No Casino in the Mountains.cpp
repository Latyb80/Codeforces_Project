#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// В этой задаче не аюсолютно никаких сложных формул
	// здесь нам нужно просто банально пройтись по массиву со счётчиком 
	// И перепрыгивать дни отдыха
	int t;
	cin >> t;
	while (t--) {
		int n, k,piki = 0,podryad = 0;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == 0)podryad++;
			else podryad = 0;
			if (podryad == k) {
				piki++; i++; podryad = 0;
			}
		}
		cout << piki << endl;
	}
}


//2126B *800
  
