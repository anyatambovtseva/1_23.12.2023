#include <iostream>
#include <regex>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    string date;
    regex datePattern("\\d{4}-\\d{2}-\\d{2}");

    cout << "Введите дату в формате год-месяц-день: ";
    cin >> date;

    if (regex_match(date, datePattern)) 
    {
        cout << "Введен корректный формат даты." << endl;
    }
    else 
    {
        cout << "Введен некорректный формат даты." << endl;
    }
    return 0;
}
