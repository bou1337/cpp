
#include <iostream>
#include <string>


std::string ft_replace(std::string str, std::string s1, std::string s2) {
    if (s1.empty()) return str; 

    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
        pos += s2.length();
    }
    return str;
}


