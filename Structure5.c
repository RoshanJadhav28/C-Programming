#include<stdio.h>

struct demo
{
    int *p;     //8
    float *q;   //8
    double d;  //8
};

int main()
{
     struct demo obj;

     int i =11;
     float f = 90.90f;

     obj.p = &i;
     obj.q = &f;
     obj.d = 90.9999;

     printf("%d\n",*(obj.p));
     printf("%f\n",*(obj.q));
     printf("%f\n",obj.d);

    return 0;
}