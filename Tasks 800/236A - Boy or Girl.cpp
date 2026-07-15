#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // Здесь нам нужно просто убрать дубликаты
    // и проверить чётность оставшейся длины
    string s;
    cin >> s;
    sort(s.begin(), s.end());// Сортируем ведь unique видит только рядом стоящие дубликаты
    s.erase(unique(s.begin(), s.end()), s.end()); // Unique не удаляет дубликаты он просто  
    cout << ((s.length() % 2 == 0) ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");// отправялет их в конец и возращает индекс начала дубликатов 
}


//236A *800

