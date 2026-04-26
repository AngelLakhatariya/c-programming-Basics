#include <stdio.h>

  int main(){
    int score;
    char grade;
     
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score > 100 || score <0) {
        printf("Invalid marks.\n");
    }
    else {
        grade = (score >= 90) ? 'A' :
                (score >= 80) ? 'B' :
                (score >= 70) ? 'C' :
                (score >= 50) ? 'D' : 
                (score >= 33) ? 'E' : 'F';

        printf("Your grade is: %c\n", grade);

     switch (grade){
     case 'A':
        printf("Excellent work! ");
        break;
     
    case 'B':
      printf("Well done! ");
      break;

    case 'C':
      printf("Good job! ");
      break;

    case 'D':
      printf("You passed, but you could do better. ");
      break;

    case 'E':
      printf("Just barely made it! ");
      break;

    case 'F':
      printf("Sorry, you failed. ");
      break;

    default:
        printf("Invalid Grade. ");
     }

     if (grade >= 'A' && grade <= 'E') {
        printf("Congratulations! You are eligible for the next level.\n");
     }
     else{
        printf("Please try again next time.\n");
     }
    }
    
  }