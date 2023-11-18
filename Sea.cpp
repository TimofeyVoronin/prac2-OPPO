#include "sea.h"

vector<Sea> createObjectsFromFile(const string& filename)
{
    // Вектор объектов Sea для хранения данных о морях
    vector<Sea> seas;

    // Открытие файла
    ifstream file(filename);

    // Проверка успешности открытия файла
    if (!file.is_open())
    {
        cerr << "Ошибка открытия файла: " << filename << endl;
        return seas;
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
        iss >> name >> depth >> salinity;
        seas.push_back({ name, depth, salinity });
    }

    // Закрытие файла после чтения
    file.close();

    // Возвращение вектора объектов Sea
    return seas;
}

void printSeaInfo(const Sea& sea)
{
    // Вывод информации о море на экран
    cout << "Название моря: " << sea.name << endl;
    cout << "Глубина: " << sea.depth << endl;
    cout << "Соленость: " << sea.salinity << endl;
    cout << endl;
}
