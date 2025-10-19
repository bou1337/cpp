


#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector <int> v  = {1,2,3,4,5} ;

    std::vector<int>::iterator it = find(v.begin(), v.end() , 'a');
}