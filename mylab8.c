#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void addition(float*operand1, float operand2);
void subtrsction(float*operand1, float operand2);
void multiplication(float*operand1, float operand2);
void division(float*operand1, float operand2);
void resetFunction(float *reset_ptr);
void exitFunction(void);
char clearOrexit[2]="0";

void addition(float*operand1, float operand2){
printf("%f + %f = \t",*operand1, operand2);
*operand1+=operand2;
printf("%f", *operand1);
float*result=&operand1;
printf("%f", *result);
}

void subtrsction(float*operand1, float operand2){
printf("%f - %f = \t",*operand1, operand2);
*operand1-=operand2;
printf("%f", *operand1);
float*result=&operand1;
printf("%f", *result);
}

void multiplication(float*operand1, float operand2){
printf("%f * %f = \t",*operand1, operand2);
*operand1*=operand2;
printf("%f", *operand1);
float*result=&operand1;
printf("%f", *result);
}

void division(float*operand1, float operand2){
printf("%f / %f = \t",*operand1, operand2);
*operand1/=operand2;
printf("%f", *operand1);
float*result=&operand1;
printf("%f", *result);
}
void resetFunction(float *reset_ptr)
{
    *reset_ptr = 0;
}
void exitFunction(void)
{
    printf("Program exiting.\n");
    exit(0);
}




int main(){


int x=0;
int*ptrx;
ptrx=&x;
int**ptrptrx;
/*ptrptrx=&ptrx;
printf("%d",x);
printf("%d",ptrx);
printf("%d",ptrptrx);

/*printf("%d",*ptrx,*ptrptrx);*/



printf("Fred's Calculator; \n");
printf("Values: 1\t2\t3\t4\t5\t6\t7\t8\t9\t0\n");
printf("Operands: +\t-\t*\t/\n");

float value1=0;
float value2=0;

float*result=&value1;
char userOperator;
bool calcStatus=true;

Start:
    printf("Start Calculations :)\n");
    printf("Enter first value: ");
    scanf("%f", &value1);

    do{
        printf("\nEnter Operator: ");
        scanf("%s", &userOperator);

        printf("\nEnter second value: ");
        scanf("%f", &value2);

        switch(userOperator){
        case '+':  addition(result,value2);
         printf("\nEnter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrexit);
                    if(!strcmp("@0", clearOrexit))
                    {
                        resetFunction(result);
                        goto Start;
                    }
                    else if(!strcmp("#0", clearOrexit))
                    {
                        exitFunction();
                    }
                    break;


        case '-':  subtrsction(result,value2);
         printf("\nEnter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrexit);
                    if(!strcmp("@0", clearOrexit))
                    {
                        resetFunction(result);
                        goto Start;
                    }
                    else if(!strcmp("#0", clearOrexit))
                    {
                        exitFunction();
                    }
                    break;

        case '*':  multiplication(result,value2);
         printf("\nEnter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrexit);
                    if(!strcmp("@0", clearOrexit))
                    {
                        resetFunction(result);
                        goto Start;
                    }
                    else if(!strcmp("#0", clearOrexit))
                    {
                        exitFunction();
                    }
                    break;

                    case '/':  division(result,value2);
         printf("\nEnter @0 to clear the result or #0 to exit or any character to continue.\n");
                    scanf("%s", clearOrexit);
                    if(!strcmp("@0", clearOrexit))
                    {
                        resetFunction(result);
                        goto Start;
                    }
                    else if(!strcmp("#0", clearOrexit))
                    {
                        exitFunction();
                    }
                    break;

                    case '#': printf("Goodbye :(\n"); calcStatus = false; break;
                    case '@': goto Start; break;
                    default: printf("Error :(\n");
                    goto Start;
}
    }while (calcStatus=1);

return 0;

}
