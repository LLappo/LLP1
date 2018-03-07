#include <iostream>
#include <string>

using namespace std;

int main (void)
{
	string name, surname, psedonym;
	cout << "Write name\n";
	cin >> name;
	cout << "Write surname\n";
	cin >> surname;
	cout << "Write psedonym\n";
	cin >> psedonym;
	cout << name << " " << surname << " \"" << psedonym << "\"" << "\n";

	return 0;
}
