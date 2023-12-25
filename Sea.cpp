#include "sea.h"
#include "FileError.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "../../../pr3oppo/pr3-OPPO/SeaTest/pch.h"

using namespace std;

void printSeaInfo(const Sea& sea)
{
    cout << "Sea Name: " << sea.name << endl;
    cout << "Sea Depth: " << sea.depth << endl;
    cout << "Sea Salinity: " << sea.salinity << endl;
}

vector<Sea> createObjectsFromFile(const string& filename)
{
    // Вектор объектов Sea для хранения данных о морях
    vector<Sea> seas;

    // Открытие файла
    ifstream file(filename);

    // Проверка успешности открытия файла
    if (!file.is_open())
    {
        throw FileError("Ошибка открытия файла: " + filename);
    }

    // Строка для считывания данных из файла
    string line;

    // Считывание данных из файла и создание объектов Sea
    while (getline(file, line))
    {
        // Использование stringstream для извлечения данных из строки
        istringstream iss(line);
        string name;
        double depth, salinity;

        // Извлечение данных из строки и создание объекта Sea
        if (!(iss >> name >> depth >> salinity))
        {
            throw FileError("Ошибка чтения данных из файла: " + filename);
        }
        seas.push_back({ name, depth, salinity });
    }

    // Закрытие файла после чтения
    file.close();

    // Возвращение вектора объектов Sea
    return seas;
}