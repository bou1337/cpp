

#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H
#include  <fstream>
#include <iostream>
#include <map>
#include <cstdlib>
int  check_input_file(char *av[],float *value ,std::map<std::string , float> &data ) ;
int valid_format(std:: string s , float *result) ;
int valid_value(std:: string s , int i ,float *rsl) ;
int valid_first_line(std::string s) ;
int valid_date(std::string s) ;
bool isLeapYear(int year) ;
int data(std::map<std::string ,float> &data) ;
float find_exchange(const std::string& date, std::map<std::string, float>& map) ;
#endif