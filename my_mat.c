// Created by Yuval and Shalev.
#include <stdio.h>
#include "my_mat.h"
#define SIZE 10
int Mat[SIZE][SIZE] = {0};
int FloydMat[SIZE][SIZE] = {0};
void CreateFloydMat();

void A() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (scanf("%d", &Mat[i][j]) == EOF)
                return;
        }
    }
    CreateFloydMat();
}

void CreateFloydMat() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            FloydMat[i][j] = Mat[i][j];
        }
    }
    for (int k = 0; k < SIZE; k++) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if ((i != j) && (FloydMat[i][k] > 0) && (FloydMat[k][j] > 0)) {
                    int sum = FloydMat[i][k] + FloydMat[k][j];
                    if (FloydMat[i][j] == 0)
                        FloydMat[i][j] = sum;
                    else
                        FloydMat[i][j] = (sum < FloydMat[i][j]) ? sum : FloydMat[i][j];
                }
            }
        }
    }
}

void B (int i, int j) {
    if (FloydMat[i][j] > 0)
        printf("True");
    else {
        printf("False");
    }
    printf("\n");
}

void C (int i, int j) {
    if (FloydMat[i][j] > 0)
        printf("%d", FloydMat[i][j]);
    else
        printf("-1");
    printf("\n");
}