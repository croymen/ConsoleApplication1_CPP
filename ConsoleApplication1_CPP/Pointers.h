#pragma once
#pragma once

class Pointers
{
private:
    void SwapValues(int* p_a, int* p_b);    
    void SwapValues(int p_a, int p_b);
public:
    Pointers() = default; // no need to define body in .cpp
    ~Pointers() = default;
    
    void PrintRefAndPointer();
    void SwapValuesTest();
    void ArrayTest();
    void SwapValuesRef(int& p_a, int& p_b);
};


