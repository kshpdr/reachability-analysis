#include <stdio.h>

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
void sink(int data) {
    printf("Sink received: %d\n", data);
}

double mutiply(double a, double b) {
    return a * b;
}

double noop(double a, double b){
    return 0;
}

int src() {
    // Declare variables to store user input and the result
    double num1, num2, sum, difference;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    noop(num1, num2);
    if(num1){
        // Call the add function and store the result in the sum variable
        sum = add(num1, num2);
    }else{
        sink(0);
    }
    return 0;
}

int main() {
    src();
    return 0;
}