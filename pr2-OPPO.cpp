#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    string filename = "in.txt";

    // Создание объектов Sea из файла
    vector<Sea> seaObjects = createObjectsFromFile(filename);

    // Вывод информации о морях
    for (const auto& sea : seaObjects)
    {
        printSeaInfo(sea);
    }

    return 0;
}

vector<Sea> createObjectsFromFile(const string& filename)
//Эта функция createObjectsFromFile читает данные из файла с именем, указанным в параметре filename
//Она создает вектор объектов типа Sea, заполняя его данными из файла, где каждая строка файла представляет информацию о море
{
    vector<Sea> seas;
    ifstream file(filename);

    string line;
    while (getline(file, line))
    {
        istringstream iss(line);
        string name;
        double depth, salinity;

        iss >> name >> depth >> salinity;
        seas.push_back({ name, depth, salinity });
    }

    return seas;
}

void printSeaInfo(const Sea& sea)
//Эта функция printSeaInfo принимает объект типа Sea и выводит информацию о море на экран с использованием стандартного вывода (cout)
{
    cout << "Название моря: " << sea.name << endl;
    cout << "Глубина: " << sea.depth << endl;
    cout << "Соленость: " << sea.salinity << endl;
    cout << endl;
}