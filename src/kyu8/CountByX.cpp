#include "CountByX.hpp"

std::vector<int> countBy(int x, int n){
    std::vector<int> exit(n,x);

    for (int i = 1; i<n; ++i)
    {
        exit[i]=x*(i+1);
    }

    return (exit);
}