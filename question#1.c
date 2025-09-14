#include <stdio.h>

int main(void) {
    int size;
    printf("Pizzaa Ribaa!\n");

    printf("Choose pizza size:\n1) Small\n2) Medium\n3) Large\n");
    scanf("%d", &size);

    switch (size) {
        case 1:
            printf("Chosen size: small\n");
            break;
        case 2:
            printf("Chosen size: medium\n");
            break;
        case 3:
            printf("Chosen size: large\n");
            break;
        default:
            printf("Invalid size!\n");
    }



}

