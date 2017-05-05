#include "GaussNumber.h"

#include <iostream>

GaussNumber::GaussNumber()
{
    this->r = 0;
    this->i = 0;
}

GaussNumber::GaussNumber(int r, int i)
{
    this->set(r, i);
}

GaussNumber::~GaussNumber()
{
    std::cout << "Gauss number deleted" << std::endl;
}

void GaussNumber::set(int r, int i)
{
    this->r = r;
    this->i = i;
}

int GaussNumber::getReal()
{
    return this->r;
}

int GaussNumber::getImg()
{
    return this->i;
}