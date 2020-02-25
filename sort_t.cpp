/*
    sort_t.cpp

    Test program for sort functions
*/

#include "sort.hpp"
#include <cassert>
#include <vector>

int main() {

    {
        std::vector<int> v;
        assert(v.size() == 0);
        assert(v.empty());

        sort(v);

        assert(v.size() == 0);
        assert(v.empty());
    }

    return 0;
}
