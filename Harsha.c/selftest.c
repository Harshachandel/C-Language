// #include <stdio.h>
// int main (){

// for(int row = 5 ; row >= 1 ; row--){                //mistake row++   corerct row--
// for(int space = 1 ; space <= row ; space++ ){
// printf(" ");
// }

// for(int col = row ; col <= 5 ; col++ ){            //mistake col <= row ;

// printf("%d",col);                                                                  // 5      
//                                                                                 //   45
// }                                                                                 //345
//                                                                                  //2345
// printf("\n");                                                                   //12345
// }

//     return 0;
// }





// #include <stdio.h>
// int main (){
// for(int row = 1 ; row <=5 ; row++ ){                          // 5 - row kyu huaa hai 
// for(int space = 1 ; space <=5 - row ; space++ ){              // aur iske phale wale main space <= row kyu ! 
// printf(" ");                                             

// }
// for(int col = 1 ; col <= row ; col++  ){            
                                              //   1
// printf("%d",col);                         //   12
                                            //   123   
// }                                          //1234
                                             //12345
// printf("\n");
// }
//     return 0; 
// }



//------------------------------------------------------------------------------------------------------------

//1234554321
//1234  4321
//123    321
//12      21
//1        1


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

//--------------------------------------------------------------------------------------------------------------


// 12345
// 1234
// 123
// 12
// 1
// 1
// 12
// 123
// 1234
// 12345


// #include <stdio.h>
// int main(){

// for(int row = 0 ; row <= 5 ; row++){
// for(int col = 1 ; col <= 5 - row ; col++){

// printf("%d",col);
// }

// printf("\n");
// }
// for(int row = 1 ; row<= 5 ; row++){

// for(int col = 1 ; col <= row ; col++ ){
// printf("%d",col);
// }
// printf("\n");
// }

//     return 0 ; 
// }



//********************************************************************************************************************************************************************** */


//     5
//    44
//   333
//  2222
// 11111


// #include <stdio.h>
// int main(){

// for(int row = 5 ; row >= 1 ; row-- ){

// for(int space = 1 ; space<= row ; space++ ){       //This is other method of this patten 
//     printf(" ");
// }    

// for(int col = 5 ; col>= row  ; col--){

// printf("%d",row);

// }


// printf("\n");
// }

//     return 0 ; 
// }



//********************************************************************************************************************************************************************************************************************* */


// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5


// #include <stdio.h>
// int main(){

// for(int row = 1 ; row <= 5 ; row++){

// for(int col = row ; col <= 5 ; col++){

// printf("%d",row);

// }

// printf("\n");
// }

//     return 0 ;
// }



/************************************************************************************************************************************************************************************************************** */

//     1
//    12
//   123
//  1234
// 12345

// #include <stdio.h>
// int main(){

// for(int row = 1 ; row <= 5 ; row++){

// for(int space = 1 ; space <= 5 - row ; space++){
// printf(" ");
// }    

// for(int col = 1 ; col <= row ; col++){

// printf("%d",col);

// }


//     printf("\n");
// }



//     return 0 ;
// }



//********************************************************************************************************************************************** */

//      5
//     54
//    543
//   5432
//  54321

// #include <stdio.h>

// int main(){

// for(int row = 5 ; row >= 1 ; row-- ){

// for(int space = 1 ; space <= row ; space++){

// printf(" ");
// }

// for(int col = 5 ; col >= row ; col--){
// printf("%d",col);
// }



// printf("\n");
// }

//     return 0 ; 
// }



//**************************************************************************************************************************************** */

// //inserting a new element in array 

// #include <stdio.h>

// int main (){
// int arr[100], n, i, element, pos;

//     printf("Enter number of elements in the array: ");
//     scanf("%d", &n);

//     // Input array elements
//     printf("Enter the elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

// printf("Enter the element to insert : ");
// scanf("%d",&element);

// printf("Enter the position that where do you want to insert an element :  ");
// scanf("%d",pos);


// for(i = n; i > pos; i--) {
//         arr[i] = arr[i-1];

      


//     }

//}


//************************************************************************************************************************************************************************************************************************************************************************** */


//sum of n natural number ! : ---

// #include <stdio.h>
// int main(){

// int sum = 0 ; 

// int n ; 
// printf("Enter a number : ");
// scanf("%d",&n);

// for(int i = 1 ; i <= n ; i++){

// sum += i;


// }

// printf("The sum of 1 to %d is : %d",n,sum);

//     return  0 ; 
// }


//******************************************************************************************************************************************************************************************************* */

//printing 1 to 10 (with for loop) : ---

// #include <stdio.h>

// int main(){

// for(int i = 1 ; i <= 10 ; i++){

// printf("%d ",i);

// }

//     return 0 ; 
// }



// (with while loop) : ---


// #include <stdio.h>

// int main(){

// int a = 1 ; 

// while(a<=10){

// printf("%d ",a);
// a++;

// }


//     return 0 ; 
// }


//printing 10 to 1 (with for loop)  : ---


// #include <stdio.h>

// int main(){

// for(int i = 10 ; i >= 1 ; i-- ){

// printf("%d ",i);

// }

//     return 0;
// }



// (with while loop) : ---

// #include <stdio.h>

// int main(){

// int a = 10 ; 

// while(a>=1){

// printf("%d ",a);
// a--;

// }

//     return 0; 
// }


// printing table by for loop : --


// #include <stdio.h>

// int main(){

// int n ; 
// printf("Which table do you want  : ");
// scanf("%d",&n);


// for(int i = 1 ; i <= 10 ; i++ ){

// printf("%d X %d = %d\n",n,i,n*i);

// }

//     return 0 ; 
// }



