/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"
#include <algorithm>

namespace {

	void order(int& n1, int& n2) {
		if (n1 > n2)
			std::swap(n1, n2);
	}
}

// ascending sort
void sort(std::vector<int>& v) {

    if (v.size() < 2)
        return;

    order(v[0], v[1]);

    if (v.size() < 3)
    	return;

   	order(v[1], v[2]);
   	order(v[0], v[1]);
}
