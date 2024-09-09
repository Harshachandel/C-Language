//Grade Calculation 

#include <stdio.h>
int main(){

    int score;
    printf("Enter your score : ");
    scanf("%d",&score);

(score>=90)? printf("Grade A ! Excellent work! You are eligible for the next level.") : 
(score>=80)? printf("Grade B ! Good job! You are eligible for the next level.") :
 (score>=70)? printf("Grade C ! Well done! You are eligible for the next level.") : 
(score>=60)? printf("Grade D ! You pass") :
 (score>=50)? printf("Grade E ! You pass") :
  printf("Grade F ! You fail! Needs improvement");



    return 0 ; 
}