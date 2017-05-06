#include "GaussNumber.h"
#include "SharedPointer.h"
#include "GaussPrinter.h"

#include <iostream>


int main(void)
{

    SharedPointer gauss_a( new GaussNumber(4, 3) );
    SharedPointer gauss_b( new GaussNumber(2, -5) );
    
    SharedPointer gauss_c = gauss_a + gauss_b;
    
    GaussPrinter::print(gauss_c);
    
    std::cout << "Gauss Number was printed by GaussPrinter class" << std::endl;
    
    SharedPointer copy(gauss_c);

    
    return 0;
}