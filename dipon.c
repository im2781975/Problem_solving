#include <stdio.h>
#include <conio.h>

int main()
{
    int fahrenheit,celsius,extra=0111;
    char c = '.';

    printf("Enter your temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (((fahrenheit-32)*5)/9);
    printf("The temperature in celsius is: %d%c%d", celsius,c,extra);

    getch();
    return 0;
}
