#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// ����� �� ���������� ��������� Sea � ������������� public
struct Sea {
public:
    string name;
    double depth;
    double salinity;
};

// ���������� ������� ��� �������� �������� Sea �� �����
//��� ���������� ������� createObjectsFromFile, ������� ����� �������������� ��� �������� �������� ���� Sea �� �����
// ������� ��������� ���� �������� - ��� �����, �� �������� ����� ��������� ������, � ���������� ������ �������� Sea
vector<Sea> createObjectsFromFile(const string& filename);

// ���������� ������� ��� ������ ���������� � ����
void printSeaInfo(const Sea& sea);

//���� ������������ ���� �������� ����������� ��������� Sea � ���������� ������� createObjectsFromFile � printSeaInfo, 
//������� ����� ���� ������������ � ������ ������ ���������