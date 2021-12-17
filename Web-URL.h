#include <string>
#include <iostream>

class URL {
public:
	URL(std::string url);

	std::string myURL;
	std::string myScheme;
	std::string myAuthority;
	std::string myPath;
};

std::string getURL(const URL& url);
std::string getScheme(const URL& url);
std::string getAuthority(const URL& url);
std::string getPath(const URL& url);

std::ostream& operator<<(std::ostream& os, const URL& url);
