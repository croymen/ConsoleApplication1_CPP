#include <iostream>
#include "Pointers.h"

void Pointers::PrintRefAndPointer() {
    int a, *p_a;
    a = 56; // uloz hodnotu do prom a
    p_a = &a; // ulozi do p_a adresu promenne a
    *p_a = 15; //ulozi hodnotu 15 na adresu v p_a 
    printf("\nPromenna a s hodnotou %d je v pamìti uložená na adrese %p", a, &a); //vypis adresy v x64 formatu (%p)
    printf("\nUkazatel p_a má hodnotu(adresu) %p ukazuje na hodnotu %d", p_a, *p_a);    
}

//parametr volany odkazem - pointer
void Pointers::SwapValues(int* p_a, int* p_b)
{
    int& pomocna = *p_a; 
    *p_a = *p_b; // both pointers have same value p_b (even the original variables)
    *p_b = pomocna;    
}


//parametr volany odkazem - reference
void Pointers::SwapValuesRef(int& p_a, int& p_b) {
    int pomocna = p_a;
    p_a = p_b; // both pointers have same value p_b (even the original variables)
    p_b = pomocna;
}

//parametr volany hodnotou 
void Pointers::SwapValues(int p_a, int p_b)
{
    int pomocna = p_a;
    p_a = p_b;
    p_b = pomocna;
}

void Pointers::SwapValuesTest() {
    int cislo1 = 15;
    int cislo2 = 8;
    printf("\nOrig: Promenna 'a' = %d, 'b' = %d.", cislo1, cislo2);
    SwapValues(&cislo1, &cislo2); //swap values a pouzivej je dale
    printf("\nSwap: Promenna 'a' = %d, 'b' = %d.", cislo1, cislo2);

    cislo1 = 15;
    cislo2 = 8;
    printf("\nOrig: Promenna 'a' = %d, 'b' = %d.", cislo1, cislo2);
    SwapValuesRef(cislo1, cislo2);
    printf("\nSwap: Promenna 'a' = %d, 'b' = %d.", cislo1, cislo2);

    cislo1 = 15;
    cislo2 = 8;
    printf("\nOrig: Promenna 'a' = %d, 'b' = %d.", cislo1, cislo2);
    SwapValues(cislo1, cislo2); // swap vules, ale jen vne metody
    printf("\nSwap: Promenna 'a' = %d, 'b' = %d.", cislo1, cislo2);
}

void Pointers::ArrayTest() {
    int const delka = 10;
    int pole[delka];
    for (int i = 0; i < delka; i++)
    {
        pole[i] = i + 1;
    }
    //int *p_pole = pole;
    int* p_pole = pole; // ekvivalentni zapis
    printf("\nPole hodnota pozice 5 = %d", p_pole[5]);    
}

