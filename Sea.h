#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../../../pr3oppo/pr3-OPPO/SeaTest/pch.h"

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