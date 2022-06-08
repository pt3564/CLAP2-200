#include <stdio.h>
#include <string.h>

int show()
{
    int movie;

    printf("----------------------\n");
    printf("Enter the movie you want to watch\n");
    printf("1. Border\n");
    printf("2. Fast and Furious 9\n");
    printf("3. 3 idiots\n");
    printf("Choice\n");
    scanf("%d", &movie);
    switch (movie)
    {
    case 1:
        printf("Thank you for choosing Border \n");
        break;
    case 2:
        printf("Thank you for choosing Fast and Furious 9\n");
        break;
    case 3:
        printf("Thank you for choosing 3 idiots\n");
        break;
    default:
        printf("Invalid choice\n");
    }
}

int seat()
{
    int n;
    float amt;
    int sh;
    char name, ch;
    printf("Enter your preferred seat choice\n");
    printf("Recliner \nGold \nSilver \nBronze\n");
    scanf("%d", &sh);
    printf("Enter the number of persons\n");
    scanf("%d", &n);
    switch (sh)
    {
    case 1:
        printf("1.Recliner\n");
        amt = 799.99 * n;
        break;
    case 2:
        printf("2.Gold\n");
        amt = 599.99 * n;
        break;
    case 3:
        printf("3.Silver\n");
        amt = 399.99 * n;
        break;
    case 4:
        printf("4.Bronze\n");
        amt = 199.99 * n;
        break;
    default:
        printf("Invalid Choice\n");
    }
    printf("Thank you for booking tickets with us hope you enjoy the show\n");
    printf("The total price is: %.2f\n", amt);
}

int main()
{
    int n;
    char name, sh, ch;
    float amt;
    printf("Enter your name\n");
    scanf("%s", &name);
    show();
    seat();

    return 0;
}
