#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int *bubblesort(int v[], int tam)
{
    int i,j, aux;

    for (i = 0; i < tam ; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    return *v;
}