#include "GaussNumber.h"
#include "SharedPointer.h"
#include "GaussPrinter.h"

#include <iostream>


int main(void)
{

    SharedPointer gauss( new GaussNumber(4, 3) );
    
    GaussPrinter::print(gauss);
    
    std::cout << "Gauss Number was printed by GaussPrinter class" << std::endl;
    
    SharedPointer copy(gauss);

    
    return 0;
}