#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	// Главная суть в том что все нечётные ходы несут вас вправо
	// а чётные влево то есть чтобы вернутся на 0 их баланс должен быть идеальным
	// ответ это то число какое мы вычитаем тх нечётных чтобы сделать баланс 
	// а равно оно просто разности сумм нечётных и чётных элементов
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int even, odd;
		even = odd = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if ((i + 1) % 2 == 0) {
				odd += a;
			}
			else even += a;
		}
		cout << even - odd << "\n";
	}
}


//2274A *800
