/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"
#include <algorithm>

// ascending sort
void sort(std::vector<int>& v) {

    if (v.size() < 2)
        return;

    if (v[0] > v[1]) {
        std::swap(v[0], v[1]);
    }
}
