#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s, fact=1;
	cout << "������� ����� �����: ";
	cin >> s;
	while (s > 0)
	{
		fact = fact * s;
		s = s - 1;
	}
	cout << "��������� ����� ����� " << fact;
	return 0;
}