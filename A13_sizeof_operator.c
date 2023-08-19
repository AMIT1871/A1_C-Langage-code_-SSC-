//****************** sizeof() operator *************************************
#include<stdio.h>
int main(){                          // print soze of DATA Type
int a=5;
printf("%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(a));
printf("%d byte\n\n",sizeof(321));

printf("%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(float));
printf("%d byte\n\n",sizeof(char));

printf("%d byte\n",sizeof(3.21));          // hear that is behaive like double --
printf("%d byte\n",sizeof(3.21f));         //  ---thats whay print 8 byte
printf("%d byte\n",sizeof(3.21F));         // After f behave like dloat data type is 4 byte
}