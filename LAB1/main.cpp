#include <iostream>
#include <string>
#include <Windows.h>
#include "../StringLib/string_processing.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[256];

    cout << "Vvedite stroku: ";
    cin.getline(str, 256);

    cout << "\nIskhodnaya stroka: " << str << endl;

    string result = StringLib::processString(str);

    cout << "Rezultat obrabotki: " << result << endl;

    return 0;
}