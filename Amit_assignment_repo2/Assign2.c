#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int bit;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &bit);

    printf("Number before toggling: %d", num);

    bin_rep(num);
    printf("\n");
    toggle(num,bit);

    return 0;
}


void bin_rep(int number){
    for(int i = 1<<31 ; i>0 ; i=i/2){
        (number&i)?printf("1"):printf("0");
    };
}

void toggle(int number,int tog){
    number = number ^ (1 << tog);
    printf("number after toggling is: %d",number);
}
