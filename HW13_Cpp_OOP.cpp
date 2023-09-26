#include <iostream>
#include "Watch.h"

int main()
{
    std::cout << "Start!\n";
    Watch watch1;
    std::cout << watch1.getTime() << "\n";

    Watch watch2(22, 13, (char*)"CASIO");
    std::cout << watch2.getTime() << "\n";
 
    return 0;
}