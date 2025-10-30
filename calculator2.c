#include <stdio.h>

float addition(float,float);
float subtraction(float,float);
float division(float, float);
float multiplication(float,float);
void getTwoNumber(float*,float*);
int factorial();

int main(){
    printf("Choice Menu: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Factorial \n 6. Exit\n");
    float num1,num2;
    for (int i =0;;i++){
        int choice;
        printf("Enter choice from choice menu: ");
        scanf("%d", &choice);

        if (choice == 1) {
            getTwoNumber(&num1,&num2);
            printf("Ans: %.2f\n",addition(num1,num2));
        }
        else if(choice == 2){
            getTwoNumber(&num1,&num2);
            printf("Ans: %.2f\n", subtraction(num1,num2));
        }
        else if(choice == 3){
            getTwoNumber(&num1,&num2);
            if (num2 == 0){
                printf("Zero Division Error.");
            }
            printf("Ans: %.2f\n", multiplication(num1,num2));
        }
        else if(choice == 4){
            getTwoNumber(&num1,&num2);
            printf("Ans: %.2f\n", division(num1,num2));
        }
        else if(choice == 5){
            factorial();
        }
        else if(choice == 6){
            printf("Session Closed\n");
            break;
        }
        else{
            printf("INVALID CHOICE. Please choose the operation from the choice menu\n");
        }
}
}


float addition(float a, float b){
    return a+b;
}
float subtraction(float a, float b){
    return a-b;
}
float division(float a, float b){
    return a/b;
}
float multiplication(float a, float b){
    return a*b;
}
void getTwoNumber(float*a,float*b){
    printf("enter number 1: ");
    scanf("%f", a);
    printf("enter number 2: ");
    scanf("%f", b);
}

int factorial(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    int fact = 1;
    if (num == 0){
        printf("factorial of 0 is 1\n");
    }
    else {
        for (int i = 1; i<=num; i++){
            fact*=i;
        }
        printf("factorial of %d is %d\n",num,fact);
    }
}