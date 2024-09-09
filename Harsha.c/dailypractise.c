
//-------------------------------------------------------------------------------------------------------------


// #include <stdio.h>
// int main(){
// char ch ;
// printf("Enter something : ");
// scanf("%d",&ch);

// if(ch<='a'||ch>='z'){
// printf("it is alphabet ! ");                        //error (sir se check karwana hai !)
// }else if(ch<=0||ch>=0){
// printf("it is a number ! ");
// }else{
//     printf("it is a special charater ! ");
// }


// return 0;    
// }



//-------------------------------------------------------------------------------------------------------------



//looping with space of 12345 :---

//    1
//   12
//  123
// 1234
//12345


// #include <stdio.h>

// int main(){


// for(int row = 1 ; row <=5  ; row++ ){
// for(int space = 1 ; space <=5 - row ; space++){
//     printf(" ");
// }
// for(int col = 1; col<=row ; col++){
// printf("%d",col);
// }
// printf("");

// printf("\n");


// }

// return 0;
// }



//-------------------------------------------------------------------------------------------------------------



//patten looping with star ***** printing :--


// #include <stdio.h>
// int main(){

// for(int row = 1 ; row <=5 ; row++){
    
// if(row==2||row==4||row==5){
// printf("*       *");
// }else if(row==1||row==3){
// printf("* * * * *");

// }



// printf("\n");

// }

//     return 0 ;
// }





//----------------------------------------------------------------------------------------------------------

 
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1


// #include <stdio.h>
// int main(){

// for(int row = 0 ; row <= 5 ; row++){
// for(int col = 1 ; col <= 5 - row  ; col++){

//     printf("%d",col);
// }

// for(int row = 5 ; row >= 1 ; row-- ){

// }
// for(int space =  1 ; space<=row ; space++ ){
// printf(" ");

// }
// for(int space = 1 ; space<=row ; space++){
// printf(" ");
// }
// for(int col = 5 - row ; col >= 1 ; col --){

// printf("%d",col);
// }

// printf("\n");
// }


//     return 0 ; 
// }

//------------------------------------------------------------------------------------------------------------


//making 2D array table :--


// #include <stdio.h>
// int main(){

// int row = 3 ;
// int col = 3 ; 

// int arr[row][col] ;


// //input :---

// for(int i = 0 ; i < 3 ; i++){

// for(int j = 0 ; j < 3 ; j++){

// printf("Enter the arr [%d][%d] index : ",i,j);
// scanf("%d",&arr[i][j]);

// }

// }


// for(int i = 0 ; i < 3 ; i++ ){

// for(int j = 0 ; j < 3 ; j++ ){

// printf("%d ",arr[i][j]);


// }

// printf("\n");

// }


// return 0 ; 

// }



//*************************************************************************************************************************************************** */


// making calculator with only printf method without using return 0 method : --

// #include <stdio.h>

// int calculator(int a , int b , int ch ){

// switch(ch){

// case  1 :

// printf("%d",a+b);
// break;

// case 2 : 

// printf("%d",a-b);
// break;

// case 3 :

// printf("%d",a*b);
// break ; 

// case 4 : 

// printf("%d",a/b);
// break;

// case 5 :

// printf("%d",a%b);
// break;
// default: 
// printf(" Enter the vaild number ! ");


// }


// }


// int main(){

// int a ; 
// printf("Enter the number for a : ");
// scanf("%d",&a);

// int b ; 
// printf("Enter a number for b : ");
// scanf("%d",&b);

// printf("Press 1 for addition \n");
// printf("Press 2 for subtraction \n");
// printf("Press 3 for multiplication \n");
// printf("Press 4 for division \n");
// printf("Press 5 for modulas \n");


// int ch ; 
// printf("Enter a number for ch to perform the function : ");
// scanf("%d",&ch);


//  calculator (a,b,ch);

//     return 0 ; 
// }


//***************************************************************************************************************************************************************************************************************************************************************** */


//make the calculator with return 0 ; method :---


// #include <stdio.h>

// int calculator(int a , int b , int ch ){

// switch(ch){

// case 1 : 

// return a+b ; 
// break;

// case 2 : 

// return a-b;
// break; 

// case 3 :

// return a*b;
// break;

// case 4 : 

// return a/b;
// break;

// case 5 :

// return a%b;
// break;
// default:
// printf("Enter a vaild number ! ");

// }
    
// }


// int main(){

// int a ; 
// printf("Enter a number for value of a : ");
// scanf("%d",&a);

// int b ; 
// printf("Enter a number for value of b : ");
// scanf("%d",&b);

// printf(" Press 1 for addition of number means '+' ! \n ");
// printf("Press 2 for subtraction of number means '-' ! \n ");
// printf("Press 3 for multipication of number means '*' ! \n ");
// printf("Press 4 for division of number means '/' ! \n ");
// printf("Press 5 for modulas of number ! \n ");

// int ch ;
// printf("Enter the number for perform the function : ");
// scanf("%d",&ch);


// int value = calculator(a,b,ch);

// printf("Your answer is : %d",value); 

//     return 0 ; 
// }


//*************************************************************************************************************************************************************************************************************************************************** */

