//********************** Q.2 Leap Year(IMP) ********************************************
#include<stdio.h>
int main(){                                   // year%4==0   every 4th year is leapyear
int year;                                     // 
 printf("Enater  year \n");
      scanf("%d",&year);
      if(year%4==0 && year%100!=0 || year%400==0){
        printf("Leap Year");
      }
      else{
        printf("Not Leap Year");
      }
}

