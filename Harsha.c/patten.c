// looping with space of 12345 :---


//     1
//    12
//   123
//  1234
// 12345

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




// patten looping with star ***** printing :--


// * * * * *
// *       *
// * * * * *
// *       *
// *       *


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


// patten looping for reverse 54321 :---


// #include <stdio.h>
// int main(){

// for(int row = 5; row >=1 ; row-- ){
// for(int space = 1; space <=row ; space++ ){

// printf(" ");                                                  //     5
                                                                //     45
// }                                                            //    345
// for(int col = row ; col <= 5 ; col++ ){                       //  2345
// printf("%d",col);                                             // 12345
// }
// printf("\n");

// }

// return 0;
// }

// #include <stdio.h>
// int main (){

// printf("hi");
//     return 0;
// }

// #include <stdio.h>
// int main(){

// for(int row = 5 ; row >= 1 ; row--){          //mistake row++   and    row<=1
// for(int col = 5 ; col >= row ; col-- ){
// printf("%d",row);
// }

// printf("\n");
// }

//     return 0 ;
// }




//-----------------------------------------------------------------------------------------------------------

//     5
//    45
//   345
//  2345
// 12345

// #include <stdio.h>
// int main()
// {

//     for (int row = 5; row >= 1; row--)
//     { // mistake row++ kiya tha
//         for (int space = 1; space < row; space++)
//         {
//             printf(" ");
//         }

//          // correct way is row--
//         for (int col = row; col <= 5; col++)
//         {
//             printf("%d", col);
//         }

//         printf("\n");
//     }

//     return 0;
// }




//-----------------------------------------------------------------------------------------------------------




// #include <stdio.h>
// int main()
// {

//     for (int row = 5; row >= 1; row--)
//     { // mistake row++ kiya tha
//         for (int space = 1; space < row; space++)
//         {
//             printf(" ");
//         }
//                                                                         //    5 
//                                                                         //   44
//                                                                         //  333
//          // correct way is row--                                        // 2222
//         for (int col = row; col <= 5; col++)                           // 11111
//         {
//             printf("%d", row);
//         }

//         printf("\n");
//     }

//     return 0;
// }


//------------------------------------------------------------------------------------------------------------------------------


// #include <stdio.h>
// int main(){

// for(int row = 0 ; row < 5 ; row++){            //left side 
 

// for(int col = 1; col <=5 - row ; col++){

// printf("%d",col);                                       //12345
//                                                         //1234
// }                                                       //123
// for(int space = 1 ; space <= row ; space++ ){           //12
//                                                         //12
// printf(" ");                                            //1
// }
// printf("\n");
// }


//     return 0 ;
// }



//-----------------------------------------------------------------------------------------------------------


// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1


// #include <stdio.h>
// int main(){

// for(int row = 0 ; row <= 5 ; row++ ){
// for(int col = 1 ; col <= 5 - row; col++ ){

// printf("%d",col);
// }

// for(int space = 1 ; space <= row ; space++ ){
// printf(" ");
// }
// for(int space = 1 ; space <= row ; space++ ){
// printf(" ");
// }

// for(int col = 5 - row  ; col >= 1 ; col--){

// printf("%d",col);

// }

// printf("\n");

// }
//     return 0 ; 
// }


//------------------------------------------------------------------------------------------------------------

// 5 4 3 2 1
// 5 4 3 2                6 - inner row
// 5 4 3                  6 - 54321
// 5 4                    6 - 5432
// 5

// #include <stdio.h>
// int main(){

// for(int row = 5 ; row >= 1 ; row--){
// for(int col = 5 ; col >= 6 - row ; col--){

// printf("%d",col);
// }

// printf("\n");

// }
//     return 0 ; 
// }





//-----------------------------------------------------------------------------------------------------------


// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1






// #include <stdio.h>
// int main(){

// for(int row = 0 ; row <= 5 ; row++){
// for(int col = 1 ; col <= 5 - row ; col++){

// printf("%d",col);

// }

// for(int space = 1 ; space <= row ; space++){
// printf(" ");
// }

// for(int space = 1 ; space <= row ; space++){
// printf(" ");
// }

// for(int col = 5 ; col >= 1 ; col-- ){       // yeh code sirf meri samaj ke liye hai ! 
//                                             // so just don't take it seriously ! 
// }
// for(int col = 5 - row ; col >= 1 ; col-- ){
// printf("%d",col);
// }
//                                        //ab niche wale side 

// printf("\n");

// }


// for(int row = 1 ; row <=5 ; row++){
// for(int col = 1 ; col <= row ; col++){
// printf("%d",col);
// }

// for(int space = 5 - row ; space >= 1 ; space--){
// printf(" "); 
// }

// for(int space = 5 - row ; space >= 1 ; space--){
// printf(" "); 
// }

// for(int col = row ; col >= 1 ; col--){
// printf("%d",col);
// }
// printf("\n");
// }
//     return 0 ;
// }



//-----------------------------------------------------------------------------------------------------------


//     *
//    * *
//   * * *
//  * * * *
// * * * * *


// #include <stdio.h>

// int main(){

// for(int i = 1 ; i <= 5 ; i++ ){
// for(int space = 1 ; space <=5 - i ; space++){
// printf(" ");
// }


// if(i==1){
// printf("*");
// }else if(i==2){
//     printf("* *");
// }else if(i==3){
//     printf("* * *");
// }else if(i==4){
//     printf("* * * *");
// }else{
//     printf("* * * * *");
// }

// printf("\n");
// }
//     return 0 ; 
// }




//other way :---


//     * 
//    * *
//   * * *
//  * * * *
// * * * * *

// #include <stdio.h>
// int main(){

// for(int i = 1 ; i <= 5 ; i++){

// for(int space = 1 ; space <=5 - i ; space++){
//     printf(" ");
// }

// for(int j = 1 ; j <= i ; j++){

// printf("* ");

// }


// printf("\n");
// }


//     return 0 ; 
// }


//------------------------------------------------------------------------------------------------------------


//       *
//     * * *
//    * * * * *
//  * * * * * * *
// * * * * * * * * *


// #include <stdio.h>
// int main(){

// for(int row = 1 ; row <= 5 ; row++){

// for(int space = 1 ; space <= 5 - row ; space++){
//     printf("  ");
// }

// for(int col = 1 ; col <= (2*row - 1 ) ; col++){

// printf("* ");
// }


// printf("\n");

// }


//     return 0 ; 
// }


//------------------------------------------------------------------------------------------------------------------------------


//     1
//    22
//   333
//  4444
// 55555


// #include <stdio.h>
// int main(){

// for(int row = 1 ; row <= 5 ; row++){

// for(int space = 1 ; space <= 5 - row ; space++){

// printf(" ");

// }

// for(int col = 1 ; col <= row ; col++){

// printf("%d",row);
// }


// printf("\n");
// }


//     return 0 ;
// }



//********************************************************************************************************************************************************************************************* */

















