#include "sea.h"

vector<Sea> createObjectsFromFile(const string& filename)
{
    // ������ �������� Sea ��� �������� ������ � �����
    vector<Sea> seas;

    // �������� �����
    ifstream file(filename);

    // �������� ���������� �������� �����
    if (!file.is_open())
    {
        cerr << "������ �������� �����: " << filename << endl;
        return seas;
    }

    // ������ ��� ���������� ������ �� �����
    string line;

    // ���������� ������ �� ����� � �������� �������� Sea
    while (getline(file, line))
    {
        // ������������� stringstream ��� ���������� ������ �� ������
        istringstream iss(line);
        string name;
        double depth, salinity;

        // ���������� ������ �� ������ � �������� ������� Sea
        iss >> name >> depth >> salinity;
        seas.push_back({ name, depth, salinity });
    }

    // �������� ����� ����� ������
    file.close();

    // ����������� ������� �������� Sea
    return seas;
}

void printSeaInfo(const Sea& sea)
{
    // ����� ���������� � ���� �� �����
    cout << "�������� ����: " << sea.name << endl;
    cout << "�������: " << sea.depth << endl;
    cout << "���������: " << sea.salinity << endl;
    cout << endl;
}
