#include "../../../pr3oppo/pr3-OPPO/SeaTest/pch.h"
#include "sea.h"
#include <iostream>

// ������� ��� ������ ���������� � �����
void displaySeaInfo(const vector<Sea>& seaObjects)
{
    for (const auto& sea : seaObjects)
    {
        printSeaInfo(sea);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    // ��� ����� � �������
    string filename = "test_input.txt";

    // �������� �������� Sea �� �����
    vector<Sea> seaObjects = createObjectsFromFile(filename);

    // ����� ���������� � �����
    displaySeaInfo(seaObjects);

    return 0;
}