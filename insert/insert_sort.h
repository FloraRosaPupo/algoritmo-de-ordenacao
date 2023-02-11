#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int *insertsort(int v[], int tam)
{
    int i, j, chave;

    for (j = 1; j < tam; j++)
    {
        chave = v[j];

        i = j - 1;

        while (i >= 0 && v[i] > chave)
        {
            v[i + 1] = v[i];
            i = i - 1;
        }

        v[i + 1] = chave;
    }

    return *v;
}

