#include "../../../pr3oppo/pr3-OPPO/SeaTest/pch.h"
#include "sea.h"
#include <iostream>

// Функция для вывода информации о морях
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

    // Имя файла с данными
    string filename = "test_input.txt";

    // Создание объектов Sea из файла
    vector<Sea> seaObjects = createObjectsFromFile(filename);

    // Вывод информации о морях
    displaySeaInfo(seaObjects);

    return 0;
}