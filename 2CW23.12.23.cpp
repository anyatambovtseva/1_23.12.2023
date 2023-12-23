#include <iostream>
#include <regex>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    string date;
    regex datePattern("\\d{4}-\\d{2}-\\d{2}");

    cout << "������� ���� � ������� ���-�����-����: ";
    cin >> date;

    if (regex_match(date, datePattern)) 
    {
        cout << "������ ���������� ������ ����." << endl;
    }
    else 
    {
        cout << "������ ������������ ������ ����." << endl;
    }
    return 0;
}
