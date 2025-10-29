
#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <string>
# include <iostream>
# include <exception>

class PmergeMe {

public:
    static void sort(std::vector<int>& container) ;

private:
    PmergeMe();
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& rhs);
    ~PmergeMe();
    static void fordJohnson(std::vector<int>& C);
};

#endif