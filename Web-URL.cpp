#include "Web-URL.h"

URL::URL(std::string url)
    : myURL{ url } {

    int colonPlacement = myURL.find(":");

    myScheme = myURL.substr(0, colonPlacement + 1);

    int forwardSlashPlacement = myURL.find_first_of("/", colonPlacement + 3);

    myAuthority = myURL.substr(colonPlacement + 1, forwardSlashPlacement - colonPlacement - 1);
    myPath = myURL.substr(forwardSlashPlacement);
}

std::string getURL(const URL url) {
    return url.myURL;
}

std::string getScheme(const URL url) {
    return url.myScheme;
}

std::string getAuthority(const URL url) {
    return url.myAuthority;
}

std::string getPath(const URL url) {
    return url.myPath;
}

std::ostream& operator<<(std::ostream& os, const URL& url) {
    std::string scheme = url.myScheme.substr(0, url.myScheme.find_first_of(":"));
    std::string authority = url.myAuthority.substr(url.myAuthority.find_first_of(".") + 1);

    os << "URL: " << getURL(url) << "\n    SCHEME: " << scheme + "\n    AUTHORITY: " << authority <<
        "\n    PATH: " << url.myPath << "\n";
   
    return os;
}