#include <stdio.h>

int main()
 
{
 int age;
 char star;
 float pi;

 printf("please input age\n");
 scanf("%d", &age);
 printf("Mentioned age is %d\n",age);

// why %c is not working //

 printf("please input star\n");
 scanf("%s", &star);
 printf("star is saw like %c\n", star);

 printf("please input pi value\n");
 scanf("%f", &pi);
 printf("pi value is %f\n",pi); 

return 0;
}


// %d,%c,%f are format specifiers
//age star pi are variables
//& is address, age ko memory ka block diya gya h, & ye jo bi hme input milega ye * usko us memory me add kra de
