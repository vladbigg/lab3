#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>

using namespace std;

int main()
{
	ifstream f("test.txt");
	string line;
	smatch match;

	const auto r = regex(R"((z).{3}(z))");
	while (getline(f, line))
	{
		regex_search(line, match, r);
		if (!match.empty()) cout << line << "\n\n";
	}
}