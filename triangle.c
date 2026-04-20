#include <stdio.h>

int main(){

    int angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%d", &angle1);

    printf("Enter second angle: ");
    scanf("%d", &angle2); 

    angle3 = 180 - (angle1 + angle2);

    if(angle1 + angle2 <180 && angle1 >0 && angle2 > 0){
        printf("Third angle: %d\n", angle3);
    } else{
        printf("Invalid angles. The sum of two angles must be less than 180.\n");

    }
}