#include <stdio.h>

int main(void) {
    int size;
    int quantity;
    int crust;
    float price= 0;
    char cheese;
    int time;
    char student;
    int delivery;

    // Pizza Size
    printf("Pizza Machine!\n");
    printf("Choose pizza size:\n1) Small (8$)\n2) Medium (10$)\n3) Large (12$)\n");
    scanf("%d", &size);

    switch (size) {
        case 1:
            printf("Chosen size: small\n");
            price = 8;
            break;
        case 2:
            printf("Chosen size: medium\n");
            price = 10;
            break;
        case 3:
            printf("Chosen size: large\n");
            price = 12;
            break;
        default:
            printf("Invalid size!\n");
    }

    // Price based upon quantity
    printf("How many pizzas do you want? ");
    scanf("%d", &quantity);

    if (quantity > 1) {
        printf("Check out our multi-pizza deals!\n");
        // Formula to calc price per quantity
        price = (price * quantity) - (quantity * (float)(quantity - 1)/2);
    }
    printf("Your bill is %.2f$\n",price);

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

    if (quantity == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    }

    printf("Delivery method:\n1) Pick up\n2) Delivery\n");
    scanf("%d", &delivery);

    if (delivery == 2) {
        price += 3;
    }

    // RECEIPT
    printf("=========RECEIPT=========\n");
    printf("Pizza Size:      %d\n",size);
    printf("Pizza Quantity:  %d\n",quantity);
    printf("Pizza Cheese:    %c\n",cheese);
    printf("Pizza Time:      %d(Hrs)\n",time);
    printf("Pizza Delivery:  %d\n",delivery);
    printf("Student:         %c\n",student);
    printf("Total Price:     %.2f$\n",price);

    return 0;
}

