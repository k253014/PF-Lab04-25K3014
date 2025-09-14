#include <stdio.h>

int main(void) {
    int quantity;

    printf("How many pizzas do you want? ");
    scanf("%d", &quantity);

    if (quantity > 1) {
        printf("Check out our multi-pizza deals!");
    }
    else {
        printf("Your bill is 8$");
    }
}

