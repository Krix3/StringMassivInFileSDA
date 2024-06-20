#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

// ������� ��� ������ ������� ����� � ����
void writeStringsToFile(const vector<string>& strings, const string& filename)
{
    ofstream outFile(filename);

    // ���������, �������� �� ����
    if (!outFile)
    {
        cerr << "�� ������� ������� ���� ��� ������: " << filename << endl;
        return;
    }

    // ���������� ������ ������ � ����
    for (const auto& str : strings)
    {
        outFile << str << endl;
    }

    // ��������� ����
    outFile.close();
}

int main()
{
    // ������ ������� �����
    vector<string> strings = {
        "������ ������",
        "������ ������",
        "������ ������",
        "��������� ������",
        "����� ������"
    };

    // ��� �����
    string filename = "output.txt";

    // ���������� ������ � ����
    writeStringsToFile(strings, filename);

    cout << "������ ������� �������� � ���� " << filename << endl;

    return 0;
}