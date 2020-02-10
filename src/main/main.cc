#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::vector<int> vect = {1, 4, 5, 23, 100, 12, 18, 175};
    Game mygame(vect);
    mygame.start();

    return EXIT_SUCCESS;
}