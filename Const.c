#include<stdio.h>

int main()
{
    int X =11;

    const int Y = 11;  // Read Only Variable

    X++;
    X--;
    X = 21;

    printf("Value of X %d :\n" , X);
    
    return 0;

}