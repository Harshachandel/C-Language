//finding minimum number : ---

// #include <stdio.h>

// int main(){

// int a ; 
// printf("Enter the value for a : ");
// scanf("%d",&a);

// int b ; 
// printf("Enter the value for b : ");
// scanf("%d",&b);

// if(a<b){

// printf("%d is minimum number ! ",a);

// }else{
// printf("%d is minimum number ! ",b);
// }


// return 0 ; 

// }



//checking of number it is negetive , positive or a netural without using ladder statement : ---


// #include <stdio.h>

// int main(){
// int a ; 
// printf("Enter a number for a : ");
// scanf("%d",&a);

// if(a>0){

// printf("It is a positive number ! ");

// }

// if(a<0){

// printf("It is a negetive number ! ");

// }

// if(a==0){

// printf("It is a neural means 0 ! ");

// }

// return 0 ; 

// }



//Take out the average marks of 3 subjects of a student : ---


// #include <stdio.h>
// int main(){

// int a ;
// printf("Enter the marks of english : ");
// scanf("%d",&a);


// int b ;
// printf("Enter the marks of maths : ");
// scanf("%d",&b);


// int c ;
// printf("Enter the marks of science : ");
// scanf("%d",&c);



// float Average = (a+b+c)/3;

// printf("Average marks of a student is : %f",Average);

//     return  0 ;
// }



//finding minimum of three numners from ternary operator : ---


// #include <stdio.h>

// int main(){


// int a ;
// printf("Enter the  value of a : ");
// scanf("%d",&a);


// int b ;
// printf("Enter the value of b : ");
// scanf("%d",&b);


// int c ;
// printf("Enter the value of c : ");
// scanf("%d",&c);


// //Ternary opertor 

// (a<b)? printf("the minimum value is %d",a) : (b<c)? printf("the minimum value is %d",b) :
//  printf("the minimum value is %d",c);


//    return  0 ; 
// }



//recharge by switch case :---


// #include <stdio.h>

// int main(){

// printf("Welcome to Virtel company !\n ");


// printf("Press : 1 for English ! \n");
// printf("Press : 2 for Hindi ! \n");
// printf("Press : 3 for Gujarati ! \n");

// int a ;
// printf("Enter a number : ");
// scanf("%d",&a);

// switch(a){

// case 1 :

// printf("press 1 for internet recharge !\n");
// printf("press 2 for top-up recharge !\n");
// printf("press 3 for special recharge !\n");

// printf("Press the number for your choice : ");
// scanf("%d",&a);

// switch(a){

// case 1 : 
// printf("Thankyou for the internet recharge ! "); 
// break;

// case 2 : 
// printf("Thankyou for the top-up recharge ! ");
// break;

// case 3 : 
// printf("Thankyou for the special recharge ! ");
// break;

// }
// break;

// case 2 : 

// printf("Internet Recharge ke liye 1 dabaiye\n");
// printf("Top-up Recharge ke liye 2 dabaiye\n");
// printf(" Recharge ke liye 3 dabaiye\n");

// printf("Aapki choice dabaiyeh : ");
// scanf("%d",&a);


// switch(a){

// case 1 : 

// printf("Aapne safaltapurvak Internet Recharge kar liya hai ! \n");
// break;

// case 2 : 
// printf("Aapne safaltapurvak Top-up Recharge kar liya hai ! \n");
// break;

// case 3 :
// printf("Aapne safaltapurvak special Recharge kar liya hai ! \n");
// break;

// }
// break;

// case 3 : 

// printf("Internet Recharge mate 1 dabavo ! \n");
// printf("Top-up Recharge mate 2 dabavo ! \n");
// printf("Special Recharge mate 3 dabavo ! \n");

// printf("Tame tamari choice dabavo : ");
// scanf("%d",&a);

// switch(a){
    
// case 1 :

// printf("Tame safaltapurvak Internet Recharge karyu chhe ! \n");
// break;

// case 2 :

// printf("Tame safaltapurvak top-up Recharge karyu chhe ! \n");
// break;

// case 3 : 

// printf("Tame safaltapurvak Special Recharge karyu chhe ! \n");
// break;
// }
// break;

// default:
// printf("Your choice is not vaild ! ");

// }
//     return 0 ; 
// }


//print the sum of all numbers from 1 to N using a  "for loop"  : ---


// #include <stdio.h>

// int main(){

// int n ; 
// printf("Enter the number : ");
// scanf("%d",&n);

// int sum = 0 ;
// int a = 0 ; 


// for(int i = 1 ; i <= n ; i++){

// sum += i ;

// }

// printf("%d",sum);

// }


//Without loop : ---


// #include <stdio.h>

// int main(){

// int a ; 
// printf("Enter the number : ");
// scanf("%d",&a);

// int sum = (a*(a+1))/2;

// printf("%d is the sum",sum);

// }



//Table of n : ---


// #include <stdio.h>
// int main(){

// int n ; 
// printf("Enter a number for table : ");
// scanf("%d",&n);

// for(int i = 1 ; i <= 10 ; i++){

// printf("%d X %d = %d \n",n,i,n*i);

// }

//     return 0 ; 
// }



// Write a Program to print 1 to 10 using a while loop : ---


// #include <stdio.h>
// int main(){

// for(int i = 1 ; i <= 10 ; i++ ){

// printf("%d ",i);

// }


// }



// Write a Program to print 10 to 1 using a while loop : ---


// #include <stdio.h>

// int main(){

// for(int i = 10 ; i >= 1 ; i--){

// printf("%d ",i);

// }

// }


// Write a Program to print 1 to N using a while loop : ---


// #include <stdio.h>
// int main(){

// int n ; 
// printf("Enter a number : ");
// scanf("%d",&n);

// for(int i = 1 ; i <= n ; i++){

// printf("%d ",i);

// }

//     return 0 ; 
// }



// Write a Program to print odd numbers from 1 to N using a while loop : ---


// #include <stdio.h>

// int main(){

// int n ; 
// printf("Enter a number : ");
// scanf("%d",&n);

// int i ; 

// for(i = 1  ; i <= n ; i++ ){


// if(i%2!=0){
// printf("%d ",i);
// }
// }

//     return 0 ; 
// }



// printing 1 to n numbers (with for loop) : ---


// #include <stdio.h>

// int main(){

// int n ; 
// printf("Enter a number : ");
// scanf("%d",&n);

// for(int i = 1 ; i <= n ; i++){

// printf("%d ",i);

// }


//     return 0 ; 
// }



// printing N to 1 number : ---


// #include <stdio.h>
// int main(){

// int n ; 
// printf("Enter a number : ");
// scanf("%d",&n);

// for(int i = n ; i >= 1 ; i-- ){

// printf("%d ",i);

// }

// }



// Write a Program to print odd numbers from N to 1 using a while loop : ---


// #include <stdio.h>

// int main(){

// int n ; 
// printf("Enter a number : ");
// scanf("%d",&n);

// for(int i = n ; i >= 1  ; i--){

// if(i%2!=0){

// printf("%d ",i);

// }

// }

//     return 0 ;
// }



// finding a leap year bettwen to years : ---


// #include <stdio.h>
// int main(){

// int first_year ; 
// printf("Enter the first_year : ");
// scanf("%d",&first_year);

// int last_year ;
// printf("Enter the last_year : ");
// scanf("%d",&last_year);


// for(int i = first_year ; i <= last_year ; i++ ){

// if(i%4==0){

// printf("%d ",i);

// }

// }


//     return 0 ;
// }



// printing even numbers from 2 to N : ---


// #include <stdio.h>

// int main(){

// int n ; 
// printf("Enter the number : ");
// scanf("%d",&n);


// for(int i = 1 ; i <= n ; i++){

// if(i%2==0){

// printf("%d ",i);

// }

// }

//     return 0 ;
// }





