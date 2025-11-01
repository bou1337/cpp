
#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <string>
# include <iostream>
# include <exception>
#include <sstream>
#include <limits>
#include <utility>

void check_input(char *av[] , std::vector<int> &data_vector , std::list<int> &data_list) ;
int to_int(std::string s) ;
double getTimeDiff(struct timespec &start, struct timespec &end) ;
void  data_in_vector(std::vector<int> &data_vector , std::string s , std::list<int> &data_list)  ;
void PmergeMe(std::list<int> &data) ;
void PmergeMe(std::vector<int> &data) ;

#endif