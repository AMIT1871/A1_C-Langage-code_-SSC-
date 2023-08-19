
//************************** Quadratic Equation (IMP) ***********************************

#include<stdio.h>                                 // First mathod 
#include<math.h>
int main(){                                       // 2a^2 + 4a + 2 = 0
float a,b,c,d;                                    // 2a^2 + 2a + 2a +2 = 0
 printf("Enater the value of a ,b & c\n");         // 2a(a+1) + 2(a+1)  = 0
 scanf("%f%f%f",&a,&b,&c);                        //       (a+1)(2a+2) = 0
d = pow(b,2) - 4*a*c ;                            //       X1----> a+1 = 0
if(d<0){                                          //                 a = -1   sqrt
  printf("Root are imangnary\n");                 //       X2---> 2a+2 = 0
}                                                 //                2a = -2
else{                                             //                 a = -1   sqrt
  printf("X1 = %.2f\n", (-b + sqrt(d)) / (2*a)); 
  printf("X2 = %.2f\n", (-b - sqrt(d)) / (2*a));  // Secodn mathod 
}                                                 //  X1--> -b + sqrt(b^24ac)/2a
}                                                 //  X1--> -b - sqrt(b^24ac)/2a