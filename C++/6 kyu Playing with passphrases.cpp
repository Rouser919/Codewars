#include <string>

class PlayPass
{
public:
	static std::string playPass(const std::string& s, int n) {
		std::string modify_string = s;
		n = n % 26;
		int i = 0;
		for (auto& str : modify_string) {
			if (isalpha(str)) {
				if (isupper(str)) {
					if (str + n > 'Z') str = ('A' + abs(n - ('Z' - str+1))); 
					else {
						str = str + n;
					}
				}
				else {
					if(str + n > 'z')str = ('a' + abs(n - ('z' - str +1 )));
					else {
						str = str + n;
					}
				}
				if (i % 2 == 0) {
					str = toupper(str);
				}
				else {
					str = tolower(str);
				}
			}
			else if (isdigit(str)) {
				str = 9 - (str - 48) + 48;
			}
			i++;
		}
		std::reverse(modify_string.begin(), modify_string.end());
		return modify_string;
	}
};
