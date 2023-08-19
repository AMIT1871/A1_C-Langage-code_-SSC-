#include<stdio.h>
#include<stdbool.h>
int main(){
   
   //************* Q - no.1 Convert Age in the form of second's **************
      int age,s;
    printf("Enter your age :\n");
    scanf("%d",&age);
    s = 86400*365*age;                           // 1 Day = 86400 Seconds
    printf("%d Year's = %d Second's ", age,s);

    
    /*//********** Q - no.2 Calculate the persentage ************************
      // maths     = M       hindi   = H
      // fisics    = F       english = E
      // chamestry = C
      float M,F,C,H,E,Percentage;
      printf("Enter the marks of M,F,C,H and E \n");
      scanf("%f%f%f%f%f",&M,&F,&C,&H,&E);
      Percentage = (M+F+C+H+E)/5;
      printf("Your Persentage is : = %.2f %%",Percentage);

    */
   /*// *********** Q - no.3 Calculation ************************************
      float a,b;
      printf("Enater the value of a & b\n");
      scanf("%f%f",&a,&b);
      float calculatoin = b/2+b*8/b-b+a/3;
      printf("%.1f/2+%.1f*8/%.1f-%.1f+%.1f/3 = %.2f",b,b,b,b,a, calculatoin);
   */

 /* // *********** Q - no.4 Print ASCI value of given character ***************
  char c;
  printf("Enter any character : \n");
  scanf("%c",&c);
  printf(" ASCII value of %c is  :  %d",c, c);
*/

/*//************* Q - no.5 Conversion Sclsius Fahrenheit Decimal **************************
float Celdius,Fahrenheit;
printf("Enter the Sclsius : \n");
scanf("%f",&Celdius);
Fahrenheit = Celdius*9/5+32;
printf("%.2f Celsius = %.2f Fahrenheit ",Celdius,Fahrenheit);

*/
}
