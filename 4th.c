// Write c program to perform a arithmetic by taking input //
#include <stdio.h>
int main()
{
    int a,b;
    printf("Please enter the Value of a ");
     scanf("%d", &a);
    printf("Please enter the Value of b ");
     scanf("%d", &b);
    printf("Add is %d\n", a+b );
    printf("Subis %d\n", a-b );
    printf("Div is %d\n", a/b );
    printf("Multi is %d\n", a*b );
    printf("Mod is %d\n", a % b );
    return 0;
}