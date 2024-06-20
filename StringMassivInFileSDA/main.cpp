#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

// Функция для записи массива строк в файл
void writeStringsToFile(const vector<string>& strings, const string& filename)
{
    ofstream outFile(filename);

    // Проверяем, открылся ли файл
    if (!outFile)
    {
        cerr << "Не удалось открыть файл для записи: " << filename << endl;
        return;
    }

    // Записываем каждую строку в файл
    for (const auto& str : strings)
    {
        outFile << str << endl;
    }

    // Закрываем файл
    outFile.close();
}

int main()
{
    // Пример массива строк
    vector<string> strings = {
        "Первая строка",
        "Вторая строка",
        "Третья строка",
        "Четвертая строка",
        "Пятая строка"
    };

    // Имя файла
    string filename = "output.txt";

    // Записываем строки в файл
    writeStringsToFile(strings, filename);

    cout << "Строки успешно записаны в файл " << filename << endl;

    return 0;
}