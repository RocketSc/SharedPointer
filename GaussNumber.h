#ifndef Gauss_H_
#define Gauss_H_

class GaussNumber
{
private:
    int r;
    int i;

public:
    void set(int r, int i);
    int getReal() const;
    int getImg() const;
    
    GaussNumber();
    GaussNumber(int r, int i);
    
    ~GaussNumber();
};

#endif