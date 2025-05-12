#include <iostream>
#include <string>
#include <fstream>

std::string ft_replace(std::string str, std::string s1, std::string s2)    ;

int main(int ac, char **av) {
    if (ac == 4) {
        std::string inputFile = av[1];
        std::ifstream file(inputFile.c_str());
        if (!file.is_open()) {
            std::cerr << "ERROR: CAN'T OPEN THE FILE\n";
            return 1;
        }

        std::string outputFile = inputFile + ".replace";
        std::ofstream outFile(outputFile.c_str());
        if (!outFile.is_open()) {
            std::cerr << "ERROR: CAN'T CREATE THE FILE\n";
            return 1;
        }

        std::string line;
        while (std::getline(file, line)) {
            outFile << ft_replace(line, av[2], av[3]) << '\n';
        }
    } else {
        std::cerr << "ERROR: Usage: ./program <filename> <string1> <string2>\n";
    }

    return 0;
}

