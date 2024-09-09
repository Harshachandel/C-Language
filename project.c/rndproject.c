//Converting celsius into frenhrits :--


// #include <stdio.h>
// int main(){

// int C ;
// printf("Enter the celsius : ");
// scanf("%d",&C);

// float F = ((C*9/5)+32);
// printf("Converting celsius into frenhrits : %f ",F);

// return 0;
// }




//gross salary :--


// #include <stdio.h>
// int main(){

// float base_salary;
// printf("Enter the salary : ");
// scanf("%f",&base_salary);

// float HRA;
// printf("Enter the HRA : ");
// scanf("%f",&HRA);

// float DA;
// printf("Enter the DA : ");
// scanf("%f",&DA);

// float TA;
// printf("Enter the TA : ");
// scanf("%f",&TA);

//                           //100 + 100 * 10 /100 
// float gross_salary = base_salary + (base_salary * HRA )/100 + (base_salary * DA )/100 + (base_salary * TA )/100;      

// printf("The gross salary is : %.2f",gross_salary);

//     return 0;
// }




//finding the third angle of triangle :--

// #include <stdio.h>
// int main(){

// int a;
// printf("Enter the first angle : ");
// scanf("%d",&a);

// int b;
// printf("Enter the second angle : ");
// scanf("%d",&b);



// float result = 180-(a+b);
// printf("The value of third angle is : %f",result);


//     return 0;
// }



//mistaken here :-- for the project of marks with grade :---


// #include <stdio.h>
// int main(){

// int a ;
// printf("Enter your score : ");
// scanf("%d",&a);

// int score ; 
// char grade;

// grade =(a>=90)?  printf("Grade A : Excellent ! ") : (a>=80)?  printf("Grade B : good job ! ") : (a>=70)? printf("Grade C : you pass ! ") : (a>=60)? printf("Grade D") :
// (a>=50)?  printf("Grade E") : printf("Grade f you fail ! ");


// grade = (score >= 90) ? printf("A ! excellcent ") :
//         (score >= 80) ? printf("B ! good job ") :
//         (score >= 70) ? printf("C ! good ") :
//         (score >= 60) ? printf("D ! you pass") :
//         (score >= 50) ? printf("E ! pass") : printf("F ! needs improvement ");


// printf("%c",score);

// }






//printing 1 to n numbers :---


// #include <stdio.h>
// int main(){

// int n;
// printf("Enter the number :  ");
// scanf("%d",&n);

// int a=1;

                                      
// while(a<=n){
//     printf("%d\n",a);                    //mistake printf("%d\n",&a);  not ok  
// a++;


// }

//     return 0;
// }



//printing a to z 

// #include <stdio.h>
// int main(){

// char m = 'A';
// char t = 'Z';

// while(m<=t){
//     if(m<=t){
//         printf(",");
//     }

// printf("%c",m);
// m+=4;

// }

//     return 0;
// }








//finding even and odd number :--


// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);

//     if(num % 2==0){
//         printf("the num is even ");
//     }else{
//         printf("the num is odd ");
//     }




//     return 0;
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







//printing alphabet a to z while skipping 3 letters :----



// #include <stdio.h>

// int main(){

// char A = 'a';
// char Z = 'z';

// while(A<=Z){
//     if(A<=Z){ 
// printf(",");

// }

// printf("%c",A);

// A+=4;

// }

//     return 0;
// }


//Recharge : ---


#include <stdio.h>
int main(){

int service;

int language;
printf("Press 1 for english ! \n");
printf("Press 2 for hindi !  \n");
printf("Press 3 for gujarati ! \n");
printf("Enter your choice : ");
scanf("%d",&language);


switch(language){

case 1 : //english

printf("press 1 for internet recharge !\n");
printf("press 2 for top-up recharge !\n");
printf("press 3 for special recharge !\n");
printf("Enter your choice :  ");
scanf("%d",&service);

switch(service){

case 1:

printf("thank you for pressing 1 you have sucessfully done internet recharge \n ");
break;
 
case 2:

printf("thank you for pressing 2 you have sucessfully done top-up recharge \n ");
break;

case 3:

printf("thank you for pressing 3 you have sucessfully done special recharge \n ");
break;

default:
printf("invaild service choice ! \n");

}
break;

case 2 : //hindi

printf("internet recharge ke liye 1 dabaiye ! \n");
printf("top-up recharge ke liye 2 dabaiye ! \n");
printf("special recharge ke liye 3 dabaiye ! \n");
printf("Aap ki choice daliye !: ");
scanf("%d",&service);


switch(service){

case 1 :{
    printf("internet recharge karwane ke liye sukriya ! \n");
    break;
} 

case 2 :{
    printf("top-up recharge karwane ke liye sukriya ! \n");
    break;
} 
case 3 :{
    printf("top-up recharge karwane ke liye sukriya ! \n");
    break;
    default: 
    printf("ye service upalad nahi hai ! \n");
}  

}
break;

case 3 : //gujarati 

printf("internet recharge karawa maate 1 dabawo \n");
printf("top-up recharge karawa maate 2 dabawo \n");
printf("special recharge karawa maate 3 dabawo \n");
printf("Enter karo tamari choice : ");
scanf("%d",&service);

switch(service){

case 1 :{ 
printf("internet recharge karawa maate tamaro aabhar ! \n ");
break;
}
case 2 :{ 
printf("top-up recharge karawa maate tamaro aabhar ! \n ");
break;
}
case 3 :{ 
printf("special recharge karawa maate tamaro aabhar ! \n ");
break;
default:
printf("Aa service aatiyare upalad nathi ! \n");
}

}
break;
default:
printf("You had choose invaild language ! \n");


}

    return 0;
}






























