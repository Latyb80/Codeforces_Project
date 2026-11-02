#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool relevant(char c, int n, int m, vector<string> a);
int main()
{
	// Суть задачи в том чтобы понять то когда вообще невозможно получить
	// нужный цвет на определённой клетке немного подумав можно понять то что
	// на самом дле клетка того цвета которая нам нужна допустим это белая 
	// и мы можем закрасить в белый то нам нужно кое-что понять а именно что даёт нам 
	// полную власть над всеми строками то есть свободное закрашивание относительно ординат
	// ответ в том что это клетки лежащие на начале и конце какого-либо столбца не обязательно одного
	// а что даёт нам полную власть относительно абсцисс по аналогии это также просто нам
	// нужно иметь клетки вначале и в конце строки также возможно у нас они вообще в разных строках 
	// но нам главное лишь их факт наличия а что если их нету
	// Ответ прост любой иной результат без этих 4 апостолов будет сводится к "NO"
	// так как без полной власти всех осей мы никак не можем покрыть дальние или невыгодно
	// расположенные клетки  
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<string> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool corner1 = 0,corner2 = 0;
		for (int i = 0; i < n; i++) {
			if (a[i].find('W') != string::npos)corner1 = 1;
			if (a[i].find('B') != string::npos)corner2 = 1;
		}
		bool ans = (relevant('W', n, m, a) || relevant('B', n, m, a));
		cout << ((ans || (corner1 + corner2) < 2) ? "YES\n" : "NO\n");
	}
}
bool relevant(char c, int n, int m, vector<string> a) {
	bool sb, se, tb, te;
	sb = se = tb = te = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == c) {
				if (i == 0)sb = 1;
				if (j == 0)tb = 1;
				if (i == n - 1)se = 1;
				if (j == m - 1)te = 1;
			}
		}
	}
	return (sb && tb && se && te);
}
