#include <stdio.h>

int main(void) {
    int size;
    int quantity;
    int crust;
    int price= 0;

    // Pizza Size
    printf("Pizzaa Machine!\n");
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

    // Price based upon quantity
    printf("How many pizzas do you want? ");
    scanf("%d", &quantity);

    if (quantity > 1) {
        printf("Check out our multi-pizza deals!\n");
        switch (quantity) {
            case 2:
                printf("Total cost is 15$\n");
                price = 15;
                break;
            case 3:
                printf("Total cost is 21$\n");
                price = 21;
                break;
            default:
                printf("Wrong input\n");
        }
    } else {
        printf("Your bill is 8$\n");
        price = 8;
    }
    // Crust Price Calculation
    printf("Which crust type?\n1) Regular\n2) Thin\n3) Stuffed\n ");
    scanf("%d", &crust);
    switch (crust) {
        case 1:
            price += (0 * quantity);
            break;
        case 2:
            price += ( 1 * quantity);
            break;
        case 3:
            price += ( 2 * quantity);
    }

    printf("Total price is %d", price);
    return 0;
}

