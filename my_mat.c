// Created by Yuval and Shalev.
#include <stdio.h>
int Mat[10][10];
int FloydMat[10][10];
void CreateFloydMat();

void A() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &Mat[i][j]);
            printf("\n");
        }
    }
    CreateFloydMat();
}

void CreateFloydMat() {
    for (int i = 0; i < 10; i++)
        FloydMat[i][i] = 0;
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i != j)
                    FloydMat[i][j] = (Mat[i][k] + Mat[k][j] < Mat[i][j]) ? Mat[i][k] + Mat[k][j] : Mat[i][j];
            }
        }
    }
}

void B (int i, int j) {
    if (FloydMat[i][j] > 0)
        printf("True");
    printf("False");
    printf("\n");
}

void C (int i, int j) {
    if (FloydMat[i][j] > 0)
        printf("%d", FloydMat[i][j]);
    else
        printf("-1");
    printf("\n");
}