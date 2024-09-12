
// 1D array average : --- 

// #include <stdio.h>

// int main(){

// float sum = 0 ;
// float avg ;


// int arr[5];

// for(int i = 0 ; i <= 4 ; i++){


// printf("arr[%d]= ",i);

// scanf("%d",&arr[i]);

// // int sum = arr[0]+=arr[i];
// // printf("%d",sum);

// sum+=arr[i];

// }

// printf("The sum is : %f\n",sum);

// avg = sum / 5 ; 
//  printf("average is %f\n",avg);


//     return 0 ; 
// }


// 2D array average  : ---


#include <stdio.h>

int main(){

float sum ;  
float avg ; 



int row = 3 ; 
int col = 3 ; 

int mul = row*col ;

int arr[row][row];

for(int i = 0 ; i <= 2 ; i++){

for(int j = 0 ; j <= 2 ; j++){

printf("arr[%d][%d] = ",i,j);
scanf("%d",&arr[i][j]);

sum += arr[i][j];

}

avg = sum / mul ;

printf("%f is avg ",avg);

printf("\n");

}



    return 0 ; 
}
