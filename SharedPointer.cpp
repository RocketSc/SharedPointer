#include "SharedPointer.h"
#include "GaussNumber.h"

#include <iostream>

Storage::Storage(GaussNumber* pObj)
{
    this->counter = 0;
    this->storeObject(pObj);
}

void Storage::storeObject(GaussNumber* pObj)
{
    this->pObj = pObj;
    this->counter++;
    
    std::cout << this->counter << std::endl;
    
}

int Storage::getStorageCount()
{
    return this->counter;
}

void Storage::incrCount()
{
    this->counter++;
    std::cout << this->counter << std::endl;
}

void Storage::decrCount()
{
    this->counter--;
    std::cout << this->counter << std::endl;
}

GaussNumber* Storage::getpObject()
{
    return this->pObj;
}

Storage::~Storage()
{
    delete this->pObj;
}

SharedPointer::SharedPointer(GaussNumber* pObj)
{
    this->container = new Storage(pObj);
}

SharedPointer::~SharedPointer()
{
    container->decrCount();
    
    if( !container->getStorageCount() ) {
        delete this->container;
    } 
}

GaussNumber* SharedPointer::ptr() const
{
    return container->getpObject();
}

SharedPointer::SharedPointer(const SharedPointer &p)
{
    this->container = p.container;
    this->container->incrCount();
}
    
SharedPointer& SharedPointer::operator= (const SharedPointer p)
{
    this->container->decrCount();
    
    if( !container->getStorageCount() ) {
        delete this->container;
    } 
    
    this->container = p.container;
    this->container->incrCount();
}


