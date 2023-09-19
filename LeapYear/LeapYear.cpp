#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int year = 0;

    cout << endl;
    cout << " Введите год в формате ГГГГ: ";
    cin >> year;

    if ((year % 100 == 0 && year % 400 != 0) || year % 4 != 0) {
        cout << " В году 365 дней (не високосный)!!!" << endl;
    }
    else {
        cout << " В году 364 дня (високосный)!!!" << endl;
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}