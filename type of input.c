#include <stdio.h>

int main()
{
    char input;
    printf("Enter a number or character: ");
    scanf("%c", &input);

    if(input >= '0' && input <= '9')
        printf("%c is a Number", input);
    else if(input >= 'A' && input <= 'Z')
        printf("%c is an Uppercase Letter", input);
    else if(input >= 'a' && input <= 'z')
        printf("%c is a Lowercase Letter", input);
    else
        printf("%c is not a valid input", input);
    
    return 0;
}
