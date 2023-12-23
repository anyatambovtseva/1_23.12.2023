#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool isValidTime(const string& timeStr) 
{
    regex timeRegex("^([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9])$");
    return regex_match(timeStr, timeRegex);
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    string timeStr;
    cout << "Введите время в формате ЧЧ:ММ:СС: ";
    cin >> timeStr;

    if (isValidTime(timeStr)) 
    {
        cout << "Введенное время корректно." << endl;
    }
    else 
    {
        cout << "Введенное время некорректно." << endl;
    }
    return 0;
}
