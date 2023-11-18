#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
//Здесь мы определяем структуру Sea
//struct Sea определяет пользовательский тип данных Sea, который содержит три поля: name (название моря), depth (глубина) и salinity (соленость).
struct Sea {
    string name;
    double depth;
    double salinity;
};

// Функция для создания объектов Sea из файла
//Эта функция создает и возвращает вектор объектов типа Sea на основе данных из файла. Она принимает один аргумент - имя файла, из которого будут считываться данные.
vector<Sea> createObjectsFromFile(const string& filename) {
    //ifstream используется для открытия файла с именем, указанным в переменной filename. Вектор seas будет использоваться для хранения объектов Sea, созданных из данных файла.
    vector<Sea> seas;
    ifstream file(filename);

    //Считывание строк из файла и создание объектов Sea:
    //В этом блоке кода программа считывает строки из файла по одной и обрабатывает каждую строку. istringstream используется для разбора строки на составные части. 
    //Далее, данные из строки (название, глубина и соленость) считываются в соответствующие переменные (name, depth и salinity) с использованием оператора >>.
    //Затем создается объект типа Sea с этими данными и добавляется в вектор seas.
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name;
        double depth, salinity;

        iss >> name >> depth >> salinity;
        seas.push_back({ name, depth, salinity });
    }

    return seas;
}

//Основная функция main начинается здесь. Сначала устанавливается русская локализация для корректного отображения текста в консоли.
//Затем определяется имя файла (в данном случае "in.txt"), из которого будут считываться данные.
//Создаются объекты Sea с использованием функции createObjectsFromFile, и результат сохраняется в векторе seaObjects.
//Затем программа выводит информацию о морях на экран, перебирая элементы вектора seaObjects и выводя название моря, глубину и соленость для каждого объекта.
int main() {
    setlocale(LC_ALL, "Russian");
    string filename = "in.txt";

    // Создание объектов Sea из файла
    //Функция createObjectsFromFile возвращает вектор объектов Sea, созданных из данных файла.
    vector<Sea> seaObjects = createObjectsFromFile(filename);

    // Вывод информации о морях
    for (const auto& sea : seaObjects) {
        cout << "Название моря: " << sea.name << endl;
        cout << "Глубина: " << sea.depth << endl;
        cout << "Соленость: " << sea.salinity << endl;
        cout << endl;
    }

    return 0;
}
