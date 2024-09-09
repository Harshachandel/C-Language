// //find minimum value of number :---


// #include <stdio.h>

// int main(){

// int x;
// printf("Enter the first number : ");
// scanf("%d",&x);

// int y;
// printf("Enter the second number : ");
// scanf("%d",&y);

// int z;
// printf("Enter the Third number : ");
// scanf("%d",&z);


// (x<=y)? printf("the minimum value is %d",x) : (y<=z)? printf("the minimum value is %d",y) :  printf("the minimum value is %d",z);


//     return 0;
// }






//find maximum value of number :---


// #include <stdio.h>

// int main(){

// int x;
// printf("Enter the first number : ");
// scanf("%d",&x);

// int y;
// printf("Enter the second number : ");
// scanf("%d",&y);

// int z;
// printf("Enter the Third number : ");
// scanf("%d",&z);


// (x>=y)? printf("the maximum value is %d",x) : (y>=z)? printf("the maximum value is %d",y) :  printf("the maximum value is %d",z); 


// return 0;
// }


//finding average marks of all three subjects :----


// #include <stdio.h>

// int main(){
// float maths;
// printf("Enter the maths marks : ");
// scanf("%f",&maths);

// float english;
// printf("Enter the english marks : ");
// scanf("%f",&english);

// float science;
// printf("Enter the science marks : ");
// scanf("%f",&science);


// float average = (maths+english+science)/3;                      //mistake braket laga diya tha 

                                                                //((maths+english+science)/3)  not ok !!

 
// printf("The average of all the subjects is : %f",average);


//     return 0;
// }



//looping with reverse 54321 :---


// #include <stdio.h>
// int main(){

// for(int row = 5; row >=1 ; row-- ){                             //     5
// for(int space = 1; space <=row ; space++ ){                     //    45
//                                                                 //   345
// printf(" ");                                                    //  2345
//                                                                 // 12345
// }
// for(int col = row ; col <= 5 ; col++ ){
// printf("%d",col);
// }
// printf("\n");

// }

// return 0;
// }



// patten looping :---


// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1


// #include <stdio.h>
// int main(){

// for(int row = 0 ; row <= 5 ; row++ ){

// for(int col = 1 ; col <= 5 - row ; col++){
// printf("%d",col);

// }
// for(int space = 1 ; space <= row ; space++ ){
// printf(" ");
// }
// for(int row = 5 ; row >= 1 ; row--){


// }
// for(int space = 1 ; space <= row ; space++ ){
// printf(" ");
// }
// for(int col = 5 - row ; col >= 1; col--  ){
//     printf("%d",col);
// }

// printf("\n");
// }


//     return 0 ; 
// }






