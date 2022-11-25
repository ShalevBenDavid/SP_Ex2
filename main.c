// Created by Yuval and Shalev.
#include <stdio.h>
#include "my_mat.h"

int main()
{
    char func = 0;
    int i = 0, j = 0;
    do {
        scanf("%c", &func);
        switch (func) {
            case 'A':
                A();
                break;
            case 'B':
                scanf("%d %d", &i, &j);
                B(i, j);
                break;
            case 'C':
                scanf("%d %d", &i, &j);
                C(i, j);
                break;
            default:
                break;
        }
    } while (func != 'D');
    return 0;
}
