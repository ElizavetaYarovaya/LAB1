
#include <iostream>
#include <cstring>
#include <string>
#include <clocale>

#include "../StringLib/string_processing.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char str[256];

    cout << "Введите строку: ";
    cin.getline(str, 256);

    cout << "\nИсходная строка: " << str << endl;

    // Преобразование C-строки в строку string
    string input(str);

    // Обработка строки с помощью библиотеки
    string result = StringLib::processString(input);

    cout << "Результат обработки: " << result << endl;

    return 0;
}
