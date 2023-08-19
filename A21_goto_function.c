// print 1 to 10 number using go to gunction 
// #include<stdio.h>
// int main(){
// int p,i=1;
// p : if(i<=10){
//     printf("%d\n",i);
//     i++;
//     goto p;
// }
// }
// other way ro print
 #include<stdio.h>
 int main(){
 int i=1,n=10;
 p : printf("%d\n",i);
 i++;
 if(i<=n){
    goto p;
 }
 }