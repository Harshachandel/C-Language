//Making calculator : -- 


#include <stdio.h>

int main(){

int a ; 
printf("Enter the value for a : ");
scanf("%d",&a);

int b ; 
printf("Enter the value for b : ");
scanf("%d",&b);

char ch ;
printf("Enter the operator : ");
 getchar();
scanf("%c",&ch);


switch(ch){

case '+':

printf("%d",a+b);
break;

case '-':

printf("%d",a-b);
break;

case '*' : 

printf("%d",a*b);
break;

case '/' :

printf("%d",a/b);
break;

default : 
printf("Please enter a vaild operator ! ");

}

    return 0 ;
}
