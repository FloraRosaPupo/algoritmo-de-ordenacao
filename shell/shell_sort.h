#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int *shellsort(int v[], int tam)
{
    int i, j, valor;

    int h = 1;
    while (h < tam)
    {
        h = 3 * h + 1;
    }
    
    while (h > 0)
    {
        for (i = h; i < tam; i++)
        {
            valor = v[i];
            j = i;
            while (j > h - 1 && valor <= v[j - h])
            {
                v[j] = v[j - h];
                j = j - h;
            }
            v[j] = valor;
        }
        h = h / 3;
    }

    return *v;
}
