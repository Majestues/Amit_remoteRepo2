#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Check even or odd
    int num;
    int check;
    printf("Enter a Number: ");
    scanf("%d",&num);
    check = num - (num/2)*2;

    printf("\n");

    if(check == 0){
        printf("The number is odd = 0");
        printf("\n");
        printf("The number is even = 1");
    }
    else{
        printf("The number is odd = 1");
        printf("\n");
        printf("The number is even = 0");
    }
    printf("\n");

    return 0;
}

// can be done with using (AND with 1)
