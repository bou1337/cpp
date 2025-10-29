

#include "PmergeMe.hpp"
#include <algorithm> 
#include <iterator>  
#include <utility>   
#include <cstdlib>   
#include <cerrno>   
#include <climits>  

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& src) { (void)src; }
PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) { (void)rhs; return *this; }
PmergeMe::~PmergeMe() {}


void PmergeMe::sort(std::vector<int>& container) {
    fordJohnson(container);
}

static const int jacob[] = {
    1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461,
    10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101
};



void PmergeMe::fordJohnson(std::vector<int>& C) {
    if (C.size() <= 1) return;
    int straggler = -1;
    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < C.size() / 2; ++i) {
        int a = C[i * 2];
        int b = C[i * 2 + 1];
        if (a < b)
            pairs.push_back(std::make_pair(a, b));
        else
            pairs.push_back(std::make_pair(b, a));
    }
    if (C.size() % 2 != 0)
        straggler = C.back();

    std::vector<int> mainChain;
    mainChain.reserve(pairs.size()); 
    for (size_t i = 0; i < pairs.size(); ++i)
        mainChain.push_back(pairs[i].second);
    fordJohnson(mainChain);


    std::vector<int> pend;
    pend.reserve(pairs.size());
    for (size_t i = 0; i < mainChain.size(); ++i) {
        int mainVal = mainChain[i]; 
        for (size_t j = 0; j < pairs.size(); ++j) {
            if (pairs[j].second == mainVal) {
                pend.push_back(pairs[j].first); 
                break;
            }
        }
    }

    if (!pend.empty())
        mainChain.insert(mainChain.begin(), pend[0]);

    int last_k = 1; 
    for (int i = 0; jacob[i] > 0; ++i) {
        int k = jacob[i];
        
        
        if (k > (int)pend.size()) 
            k = pend.size();

        for (int j = k; j > last_k; --j) {
            
            int valToInsert = pend[j - 1]; 
            

            int partner_val = -1;
            for(size_t p = 0; p < pairs.size(); ++p) {
                if (pairs[p].first == valToInsert) {
                    partner_val = pairs[p].second;
                    break;
                }
            }
            std::vector<int>::iterator endSearch = std::find(mainChain.begin(), mainChain.end(), partner_val);
            
            std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), endSearch, valToInsert);
            
            mainChain.insert(it, valToInsert);
        }
        last_k = k;
        if (k == (int)pend.size()) break; 
    }

    if (straggler != -1) {

        std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(it, straggler);
    }
    C = mainChain;
}
