#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

void vowelToZ (string& s)
{
	const string vowels {"aeiouy"};
	for(auto c : vowels)
	{
		replace(s.begin(), s.end(), c, 'z');
		replace(s.begin(), s.end(), (char) toupper(c), 'Z');
	}
}

int main (void)
{
	string name, surname, psedonym;
	cout << "Write name\n";
	cin >> name;
	cout << "Write surname\n";
	cin >> surname;
	cout << "Write psedonym\n";
	cin >> psedonym;
	vowelToZ(name);
	vowelToZ(surname);
	vowelToZ(psedonym);
	cout << name << " \"" << psedonym << "\" " << surname << "\n";

	return 0;
}
