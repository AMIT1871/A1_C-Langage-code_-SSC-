// wap for print 1 to 100 no. except 20  to 30
#include<stdio.h>
int main(){
    for (int i=1; i<=100; i++){
     if(i>=20 && i<=30){
        continue;
     }
     printf("%d\n",i);
    }
}
// wap for print 1 to 100 no. except 20  to 30 without use continue function
// #include<stdio.h>
// int main(){
//     for (int i=1; i<=100; i++){
//      if(!(i>=20 && i<=30)){
//      printf("%d\n",i);
//      }
//     }
// }
