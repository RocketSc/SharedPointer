#ifndef GaussPrinter_H_
#define GaussPrinter_H_

#include "SharedPointer.h"

#include <iostream>

class GaussPrinter
{
public:
    static void print(SharedPointer gauss)
    {
        
        if (gauss.ptr()->getImg() < 0) {
            std::cout << gauss.ptr()->getReal() << gauss.ptr()->getImg() << 'i' << std::endl;
        } else {
            std::cout << gauss.ptr()->getReal() << '+' << gauss.ptr()->getImg() << 'i' << std::endl;
        }
    }
    
};

#endif