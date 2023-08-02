#include <stdio.h>

void namaste();
void bonjour();

void main()
{
    char ch;
    printf("Enter f for french & i for indian : ");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
}
void namaste()
{
    printf("Namaste");
}
void bonjour()
{
    printf("Bonjour");
}
