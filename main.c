// Created by Yuval and Shalev.
#include <stdio.h>
#include "my_mat.h"

int main()
{
    char func = 0;
    int i = 0, j = 0;
    do {
        if (scanf("%c", &func) == EOF)
            goto end;
        switch (func) {
            case 'A':
                A();
                break;
            case 'B':
                if (scanf("%d %d", &i, &j) == EOF)
                    goto end;
                B(i, j);
                break;
            case 'C':
                if (scanf("%d %d", &i, &j) == EOF)
                    goto end;
                C(i, j);
                break;
            default:
                break;
        }
    } while (func != 'D');
    end:
    return 0;
}