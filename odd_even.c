#include <stdio.h>
int main() 
{
    int a;
    printf("Enter an integer: ");
    scanf("%i", &a);

    if (a% 2 == 0)
        printf("%d is even.", a);
    else
        printf("%d is odd.", a);
    
   }

