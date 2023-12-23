#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void removeLongSubstrings(string& input, int maxLength) 
{
    istringstream iss(input);
    string word;
    string result;

    while (iss >> word) 
    {
        if (word.length() <= maxLength) 
        {
            result += word + " ";
        }
    }
    input = result;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    string inputString;
    int maxLength = 3;

    cout << "¬ведите строку с подстроками: ";
    getline(cin, inputString);

    removeLongSubstrings(inputString, maxLength);

    cout << "–езультат: " << inputString << endl;

    return 0;
}