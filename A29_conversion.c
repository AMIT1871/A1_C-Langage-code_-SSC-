// ************************** CONVERSION **************************************
// A.1 ---------- Desimal to Binary conversion --------------------------------
#include<stdio.h>
#include<math.h>
int main(){
int n,t,s=0,i=0;
printf("Enter the desimal number\n");
scanf("%d",&n);

int q = n;                        // program are carrect if it's give rong value
while(n!=0){                      // compiler is not work properly
    t = n%2;
    s = s + t*pow(10,i);
    printf("%d\n",s);
    i++;
    n = n/2;
}
printf("D to B : %d = %d\n",q,s);      
}                                       


// A.2 ------------ Desimal to octal conversion ------------------------------------ 
// #include<stdio.h>
// #include<math.h>
// int main(){
// int n,t,s=0,i=0;
// printf("Enter the desimal number\n");
// scanf("%d",&n);

// int q = n;                        // program are carrect if it's give rong value
// while(n!=0){                      // compiler is not work properly
//     t = n%8;
//     s = s + t*pow(10,i);
//     printf("%d\n",s);
//     i++;
//     n = n/8;
// }
// printf("D to B : %d = %d\n",q,s);      
// }                                       


// A.3 ----------------- Desimal to hexadesimal conversion -------------------------
// #include<stdio.h>
// int main(){
// int n,rem,i=0;
// char hexa[50];
// printf("Enter the desimal number\n");
// scanf("%d",&n);

// while(n!=0){                      
//     rem = n%16;
    
//     if(rem<10){
//         rem = rem+48;
//     }
//     else{
//         rem = rem +55;
//     }
    
//      hexa[i] = rem;
//      i++;
//      n = n/16;
// }
// printf("hexadesimal number is : \n");
// for(int j=i; j>=0; j--){
//     printf(" %c",hexa[j]); 
// }
// }
                               


// B.1 -------------- Binary to  decimal conversion ------------------------------
// #include<stdio.h>
// int main(){
// int n,rem, s=0, i=0;
// printf("Enter the binary number\n");
// scanf("%d",&n);

// int temp = n;
// while(n!=0){
//     rem = n%10;
//     s = s+rem*pow(2,i);
//     i++;
//     n = n/10;
// }
// printf("B to D = %d : %d",temp,s);
// }

// B.2 --------------- Octal to  decimal conversion -------------------------------
// #include<stdio.h>
// int main(){
// int n, rem, s=0, i=0;
// printf("Enter the octal number\n");
// scanf("%d",&n);

// int temp = n;
// while(n!=0){
//     rem = n%10;
//     s = s+rem*pow(8,i);
//     i++;
//     n = n/10;
// }
// printf("B to D = %d : %d",temp,s);
// }

// B.3 ------------------ Hexadecimal to  decimal conversion -------------------------
// #include<stdio.h>
// #include<string.h>
// int main(){
// char hexa[50];
// int s=0, j=0;
// printf("Enter the hexadecimal number\n");
// scanf("%s",hexa);

// int length = strlen(hexa);
// for(int i=length-1; i>=0; i--){
//     if(hexa[i]>='0' && hexa[i]<='9'){
//         s = s + (hexa[i]-48) * pow(16,j);
//         j++;
//     }
//     else if(hexa[i]>='A' && hexa[i]<='F'){
//         s = s + (hexa[i]-55) * pow(16,j);
//         j++;
//     }
//     }
    
// printf("Hexadecimal : Decimal\n\t%4s : %4d",hexa ,s);
// }