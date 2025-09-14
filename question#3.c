#include <stdio.h>

int main(void) {
    int quantity;

    printf("How many pizzas do you want? ");
    scanf("%d", &quantity);

    switch (quantity) {
        case 1:
            printf("Total cost s 8$");
            break;
        case 2:
            printf("Total cost s 15$");
            break;
        case 3:
            printf("Total cost s 21$");
            break;
        default:
            printf("Wrong input");
    }
}

