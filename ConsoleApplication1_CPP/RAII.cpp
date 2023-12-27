#include <iostream>
#include "RAII.h"

int size = 100;

RAII::RAII(int size)
{
    this->size = size;
}

RAII::~RAII()
{
    size = 0;
}

void RAII::DynamicAlocation()
{
    int* p_i;
    printf("\nPokousim se alokovat pamet pro %d intu\n", size);
    // Alokace 100 krát velikosti intu
    p_i = (int*)_malloc_dbg(sizeof(int) * size, _NORMAL_BLOCK, __FILE__, __LINE__);

    // Kontrola úspìšnosti alokace
    if (p_i == NULL)
    {
        printf("Nedostatek pameti.\n");
        exit(1);
    }

    // Uvolnìní pamìti
    printf("Uvolnuji pamet.\n");
    free(p_i);
    p_i = NULL; // Pro jistotu vynullujeme ukazatel
}

