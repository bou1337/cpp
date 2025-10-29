

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>   
#include <cerrno>   
#include <climits>  
#include <sys/time.h> 
#include <iomanip>   

template <typename Container>
void printContainer(const Container& C, const std::string& prefix, const std::string& suffix) {
    std::cout << prefix;
    typename Container::const_iterator it = C.begin();
    for (int i = 0; it != C.end(); ++it, ++i) {
        
        if (i > 4 && C.size() > 5) {
            std::cout << "[...]";
            break;
        }
        std::cout << *it << " ";
    }
    std::cout << suffix;
}

int parseAndValidate(char* str) {
    char* endptr;
    errno = 0;
    long val = std::strtol(str, &endptr, 10);

   
    if (errno == ERANGE || *endptr != '\0' || val <= 0 || val > INT_MAX) {
        throw std::exception(); 
    }
    return static_cast<int>(val);
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error: No input sequence provided." << std::endl;
        return 1;
    }

    std::vector<int> vec;

    try {
        for (int i = 1; i < argc; ++i) {
            int val = parseAndValidate(argv[i]);
            vec.push_back(val);
        }
    } catch (const std::exception& e) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    printContainer(vec, "Before: ", "\n");
    timeval start, end;
    gettimeofday(&start, NULL);
    PmergeMe::sort(vec);
    gettimeofday(&end, NULL);
    long vec_seconds = end.tv_sec - start.tv_sec;
    long vec_useconds = end.tv_usec - start.tv_usec;
    double vecTime = (vec_seconds * 1e6) + vec_useconds;
    gettimeofday(&start, NULL);

    gettimeofday(&end, NULL);

    long lst_seconds = end.tv_sec - start.tv_sec;
    long lst_useconds = end.tv_usec - start.tv_usec;
    double lstTime = (lst_seconds * 1e6) + lst_useconds;


    printContainer(vec, "After:  ", "\n");


    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << vec.size() 
              << " elements with std::vector : " << vecTime << " us" << std::endl;


    return 0;
}