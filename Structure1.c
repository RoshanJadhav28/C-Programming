#include<stdio.h>

#pragma pack(1)
struct demo
{
    int no;
    float f;
    int x;
    double d;
};

int main()
{
    struct demo obj;

    printf("Size of structure is %d\n",sizeof(obj));

    
    return 0;
}