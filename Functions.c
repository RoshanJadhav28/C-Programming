#include<stdio.h>

void Fun_Value(int NO){

NO+;}
void Fun_Address(int *ptr){
    (*ptr)++;
}
void Fun_Reference(int &ref)
{
    ref++;
}

int main()
{

    int i =10,j =20,k = 10;

    Fun_Value(i);
    Fun_Address(&j)
    Fun_Reference(k)

    printf("Call by value i :i%d\n",i);
    printf("Call by Address :i%d\n"j);
    printf("Call by rEFERNCE :i%d\n",k);
    return 0;
}