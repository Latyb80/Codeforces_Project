#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Задача очень простая просто находим это число k в массиве 
    // и сравниваем только есть один нюанс ещё надо проверить чтобы число было больше 0
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ab = a[k - 1];
    cout << [&a, n, ab]() {int coun = 0; for (int i = 0; i < n; i++)if (a[i] >= ab && a[i] > 0)coun++; return coun; }() << endl;
}


//158A *800

