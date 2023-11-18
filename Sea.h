#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// ��������� Sea ��� ������������� ������ � ����
struct Sea {
public:
    string name;
    double depth;
    double salinity;
};

// ���������� ������� ��� �������� �������� Sea �� �����
vector<Sea> createObjectsFromFile(const string& filename);

// ���������� ������� ��� ������ ���������� � ����
void printSeaInfo(const Sea& sea);