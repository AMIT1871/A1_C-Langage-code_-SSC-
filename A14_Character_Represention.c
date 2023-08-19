//***************** Insert character is vovel/consonent *****************************s
#include<stdio.h>
int main(){
char ch;
printf("Enter any letter is :\n");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||      // single ch. represent in side of 
   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){      // ''  like 'a';
    printf("%c is vovel",ch);
}
else{
    printf("%c is consonent",ch);
}
}


//******************* Insert key is charecter/digit/speci syble ***********************
/*#include<stdio.h>
int main(){
char ch;
printf("Enter any letter is :\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'){
    printf("%c is Capital Letter\n",ch);
}
else if(ch>='a' && ch<='z'){
    printf("%c is Small Letter\n",ch);
}
else if(ch>='0' && ch<='9'){
    printf("%d is Digit ",ch);
}
else if(ch==" "){
    printf("Space");
}
else{
    printf("Special Symbol")
}
}
*/

//******************* Insert(ASCII)no. and fisd is charecter/digit/speci syble ***********************
/*#include<stdio.h>
int main(){
char ch;
printf("Enter any letter is :\n");
scanf("%d",&ch);
 if(ch>=65 && ch<=90){
   printf("%c is capital letter ",ch);
}
else if(ch>=97 && ch<=122){
printf("%c is small letter",ch);
}
else if(ch>=48 && ch<=58){
    printf("%d is Digit ",ch);
}
else if(ch==" "){
    printf("Space");
}
else{
    printf("Special Symbole");
}
} 
*/