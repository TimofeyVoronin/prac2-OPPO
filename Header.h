#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// «десь мы определ€ем структуру Sea с модификатором public
struct Sea {
public:
    string name;
    double depth;
    double salinity;
};

// ќбъ€вление функции дл€ создани€ объектов Sea из файла
//Ёто объ€вление функции createObjectsFromFile, котора€ будет использоватьс€ дл€ создани€ объектов типа Sea из файла
// ‘ункци€ принимает один параметр - им€ файла, из которого нужно считывать данные, и возвращает вектор объектов Sea
vector<Sea> createObjectsFromFile(const string& filename);

// ќбъ€вление функции дл€ вывода информации о море
void printSeaInfo(const Sea& sea);

//Ётот заголовочный файл содержит определени€ структуры Sea и объ€влени€ функций createObjectsFromFile и printSeaInfo, 
//которые могут быть использованы в других част€х программы