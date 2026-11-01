
#include "pch.h"
#include "string_processing.h"

#include <algorithm>
#include <cctype>

namespace StringLib
{
    std::string processString(const std::string& input)
    {
        std::string result;

        // Удаление символов, кроме букв и цифр
        for (unsigned char ch : input)
        {
            if (std::isalnum(ch))
            {
                result += static_cast<char>(ch);
            }
        }

        // Переворот строки
        std::reverse(result.begin(), result.end());

        // Удвоение каждого третьего символа
        std::string finalResult;

        for (size_t i = 0; i < result.length(); i++)
        {
            finalResult += result[i];

            if ((i + 1) % 3 == 0)
            {
                finalResult += result[i];
            }
        }

        return finalResult;
    }
}
