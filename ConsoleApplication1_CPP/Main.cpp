#include <iostream>
#include "RAII.h"
#include "Pointers.h"
//#include <Pointers.cpp>
#include "SouborySystem.h"
//#include "SouborySystem.cpp"

using namespace std;

/* // Main cannot be overloaded!
int main()
{
    std::cout << "Hello World!\n";
}
*/

// Main must be at the end of class!
// all methods must be declared before they are used.
void pointersTest()
{
    Pointers ptrs = Pointers::Pointers();
    //ptrs.PrintRefAndPointer();
    ptrs.SwapValuesTest();
    //ptrs.ArrayTest();
    
    //RAII::RAII(50).DynamicAlocation();
}

int pointerAReference() {        
    int m = 4;
    cout << "m=" << m;
    cout << "\n";

    int &r_m = m; // reference na typ    
    m = 5;    
    cout << "m=" << m << " r_m =" << r_m;
    cout <<"\n";

    r_m = 6;
    cout << "m=" << m << " r_m =" << r_m;
    cout << "\n";

    int *p_m = &r_m; // p_m nyni ukazuje na adresu r_m, ktera ukazuje na hodnotu m
    cout << "m=" << m << " r_m = " << r_m << " p_m = " << *p_m;    
    cout << "\n";

    *p_m = 7; // opet zmena vsech
    cout << "m=" << m << " r_m = " << r_m << " p_m = " << *p_m;
    cout << "\n";

    return 0;
}

// a = lowest value
// b = middle
// c = highest
void sortValues(int& a, int& b, int& c) {
    Pointers ptrs = Pointers::Pointers();

    if (b < a) {
        ptrs.SwapValuesRef(a, b);
    }
    
    if (c < a) {
        ptrs.SwapValuesRef(a, c);
    }

    if (c < b) {
        ptrs.SwapValuesRef(b, c);
    }
}

//main must always be the last method!
int main() {    
    //pointersTest();
    //souborovySystemDemo();

    int a = 8; 
    int b = 5;
    int c = 3;
    sortValues(a,b,c);
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
    
    return 0;
}




