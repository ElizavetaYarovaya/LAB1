#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
#include <Windows.h>
#include "../StringLib/string_processing.h"

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    ifstream inputFile("input.txt");

    if (!inputFile.is_open())
    {
        cout << "Ошибка открытия входного файла!" << endl;
        return 1;
    }

    string input;
    getline(inputFile, input);
    inputFile.close();

    cout << "Исходная строка: " << input << endl;

    string result = StringLib::processString(input);

    ofstream outputFile("output.txt");

    if (!outputFile.is_open())
    {
        cout << "Ошибка создания выходного файла!" << endl;
        return 1;
    }

    outputFile << result;
    outputFile.close();

    cout << "Результат обработки: " << result << endl;
    cout << "Результат записан в output.txt" << endl;

    return 0;
}