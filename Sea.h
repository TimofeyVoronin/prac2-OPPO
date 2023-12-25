#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../../../pr3oppo/pr3-OPPO/SeaTest/pch.h"

using namespace std;

// Структура Sea для представления данных о море
struct Sea {
public:
    string name;
    double depth;
    double salinity;
};

// Объявление функции для создания объектов Sea из файла
vector<Sea> createObjectsFromFile(const string& filename);

// Объявление функции для вывода информации о море
void printSeaInfo(const Sea& sea);