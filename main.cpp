#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

inline void sReverse (string& s)
{
	reverse(s.begin(), s.end());
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
	sReverse (name);
	sReverse (surname);
	sReverse (psedonym);
	cout << name << " " << surname << " \"" << psedonym << "\"" << "\n";

	return 0;
}
