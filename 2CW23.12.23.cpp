#include <iostream>
#include <regex>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    string date;
    regex datePattern("\\d{4}-\\d{2}-\\d{2}");

    cout << "¬ведите дату в формате год-мес€ц-день: ";
    cin >> date;

    if (regex_match(date, datePattern)) 
    {
        cout << "¬веден корректный формат даты." << endl;
    }
    else 
    {
        cout << "¬веден некорректный формат даты." << endl;
    }
    return 0;
}
