#ifndef SHARED_POINTER_H_
#define SHARED_POINTER_H_

#include "GaussNumber.h"

class Storage
{
private:
    GaussNumber* pObj;
    int counter;
    
public:
    void storeObject(GaussNumber* pObj);
    void incrCount();
    void decrCount();
    int getStorageCount();
    GaussNumber* getpObject();
    
    Storage(GaussNumber* pObj);
    ~Storage();
    
};

class SharedPointer
{
private:
    Storage* container;
    
public:
    SharedPointer(GaussNumber* pObj);
    ~SharedPointer();
    GaussNumber* ptr();
    
    //Copy Constructor and operator= overload
    SharedPointer(const SharedPointer &p);
    SharedPointer& operator= (const SharedPointer p);
};

#endif