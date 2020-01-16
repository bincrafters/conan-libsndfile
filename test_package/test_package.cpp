#include <iostream>
#include "sndfile.h"

int main()
{
    std::cout << sf_version_string() << "\n";
    return 0;
}
