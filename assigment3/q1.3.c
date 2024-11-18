#include <stdio.h>
#include <math.h>


int sum(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
int div(int x, int y);
double logarithm(int base,int value);
double square_root(int x);

int main() {
    int x, y, result, input;
    double result_double;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Enter 1 for addition\nEnter 2 for subtration\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for log\nEnter 6 for sqare root\n");
    scanf("%d", &input);
     
     if (input==1)
     {
        result = sum(x, y);
        printf("The result is: %d\n", result);
     }else if (input==2)
     {
         result = sub(x, y);
        printf("The result is: %d\n", result);
     }else if (input==3)
     {
         result = mult(x, y);
        printf("The result is: %d\n", result);
     }else if (input==4)
     {
         result = div(x, y);
        printf("The result is: %d\n", result);
     }else if(input==5)
     {
         result_double = logarithm(y, x); 
        printf("Log base %d of %d: %.2f\n", y, x, result_double);
     }else if(input==6)
     {
       result_double = square_root(x); 
        printf("Square root of %d: %.2f\n", x, result_double);
    } else {
        printf("Invalid input.\n");
    } 
     
    return 0;
}


int sum(int x, int y) {
    int output = x + y;
    return output;
}
int sub(int x, int y) {
    int output = x - y;
    return output;
}
int mult(int x, int y) {
    int output = x * y;
    return output;
}
int div(int x, int y) {
    int output = x / y;
  return output;
}
   double logarithm(int base, int value) {
    return log(value) / log(base);
}
double square_root(int x) {
    if (x < 0) {
        printf("Error: Square root of a negative number is undefined.\n");
        return 0;
    }
    return sqrt(x);
}