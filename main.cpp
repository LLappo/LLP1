#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

void vowelToZ (string& s)
{
	const char* vowels = "aeiouy";
	for(auto i=0; s[i]!=0; ++i)
	{
		replace(s.begin(), s.end(), vowels[i], 'z');
		replace(s.begin(), s.end(), (char) toupper(vowels[i]), 'Z');
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
	cout << name << " " << surname << " \"" << psedonym << "\"" << "\n";

	return 0;
}
