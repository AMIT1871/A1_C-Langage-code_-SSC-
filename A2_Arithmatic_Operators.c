#include<stdio.h>
int main(){

    //****************** Arithmatic Operators *****************
             // 3 + 2 = 5
             // 3 - 2 = 1
             // 3 * 2 = 6
             // 3 / 2 = 1    int/int = int 
             // 3 % 2 = 1    Remainder/ Modul
             //   a++ = 3    Post-encrement
             //   a-- = 4    First value assign then decrement
             //   ++a = 4    Pre-encrement
             //   --a = 3    First decrement the value assign   

     int a=3, b=2;   
     
    printf(" 3 + 2 =  %d \n",a+b);
    printf(" 3 - 2 =  %d \n",a-b);
    printf(" 3 * 2 =  %d \n",a*b);
    printf(" 3 / 2 =  %d \n",a/b);
    printf(" 3 % 2 =  %d \n",a%b);
    printf("a++ = %d \n", a++);          // assign a->3  then increment a->4
    printf("a-- = %d \n", a--);          // assign a->4  then increment a->3
    printf("++a = %d \n", ++a);          // Increment a->4 then assign a->4
    printf("--a = %d \n", --a);          // Decrement a->3 then assign a->3


    //****************** Modulur **********************************
     
           //   5/2   =  2             5%2   =   1    // Numerator is + remainder is +
           //  -5/2   = -2            -5%2   =  -1
           //   5/-2  = -2             5%-2  =   1
           // - 5/-2  =  2            -5%-2  =  -1


    printf("%d\n",5%2);                //1      -   1      
    printf("%d\n",2%5);                //0      -   2
    printf("%f\n",5%2);                //1.000  -   0.0000
    printf("%f\n",2%5);                //0.000      0.0000      


    
}