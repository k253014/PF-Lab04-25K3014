#include <stdio.h>

int main(void) {
    int size;
    int quantity;
    int crust;
    float price= 0;
    char cheese;
    int time;
    char student;

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
        case 2:
            price += (float)( 1 * quantity);
            break;
        case 3:
            price += (float)( 2 * quantity);
    }

    printf("Total price is %.2f$\n", price);

    printf("Do you want extra Cheese? (Y/N) ");
    scanf(" %c", &cheese);

    if (cheese == 'Y') {
        price += 1.5;
    }
    printf("Your final price is %.2f$\n", price);

    printf("Enter current time: (0-23): ");
    scanf("%d", &time);

    if (time >= 11 && time <=14) {
        float discount = 0.1 * price;
        price -= discount;
    }

    printf("Your final price is %.2f$\n", price);

    printf("Do you have a Student ID?(Y/N) ");
    scanf(" %c", &student);

    if (student == 'Y') {
        price -= 2;
    }
    printf("Your final price is %.2f$\n", price);


    return 0;
}

