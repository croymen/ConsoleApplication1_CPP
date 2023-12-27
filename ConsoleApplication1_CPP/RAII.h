#pragma once

class RAII
{
private:
    int size;
public:
    RAII();
    RAII(int size);
    ~RAII();

    void DynamicAlocation();    
};
