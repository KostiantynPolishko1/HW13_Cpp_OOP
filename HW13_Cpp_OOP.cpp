#include <iostream>
#include "Watch.h"
#include "WristWatch.h"

int main()
{
    std::cout << "Start!\n";
   /* Watch watch1;
    std::cout << watch1.getTime() << "\n";

    Watch watch2(22, 13, (char*)"CASIO");
    std::cout << watch2.getTime() << "\n";*/

    /*WristWatch wristwatch1;
    std::cout << wristwatch1.getDeepWater() << "\n";
    std::cout << (wristwatch1.getWaterProof() ? "yes" : "no") << "\n";*/
    
    WristWatch wristwatch2(15, 22, 13, (char*)"CASIO");
    std::cout << wristwatch2.getDeepWater() << "\n";
    std::cout << (wristwatch2.getWaterProof() ? "yes" : "no") << "\n";
 
    return 0;
}