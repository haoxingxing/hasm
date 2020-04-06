#include <vector>
#include <string>
struct cmd {
	enum action
	{
		CAL,
		GET,
		SAV,
	}action;
	std::vector<long long*> value;
};