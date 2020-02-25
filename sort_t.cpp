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

    {
        std::vector<int> v;
        v.push_back(2);
        v.push_back(1);
        assert(v.size() == 2);
        assert(!v.empty());
        assert(v[0] == 2);
        assert(v[1] == 1);

        sort(v);

        assert(v[0] == 1);
        assert(v[1] == 2);
        assert(v.size() == 2);
        assert(!v.empty());
    }

    return 0;
}
