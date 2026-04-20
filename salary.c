#include <stdio.h>

int main(){
    float base_salary, hra, da, ta, gross_salary;

    printf("Enter Base Salary: ");
    scanf("%f", &base_salary);

    if (base_salary > 0) {

        hra = base_salary * 0.10;
        da = base_salary * 0.05;
        ta = base_salary * 0.08;

        gross_salary = base_salary + hra + da + ta;

        printf("Gross Salary: Rs. %f\n", gross_salary);
    }
    else{
        printf("Invalid Base Salary! Please enter a positive number.\n");
    }
} 