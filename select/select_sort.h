#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void *selectionsort(int v[], int tam)
{
    int i, j, min, aux;

    for (i = 0; i < (tam - 1); i++)
    {
        min = i;
        for (j = i + 1; j < tam; j++)
        {
            if (v[j] < v[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }

    return *v;
}