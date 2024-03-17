
//calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

 int add(int a,int b);
 int subtract(int a,int b);
 int multiply(int a, int b);
 int divide(int a, int b);
 #endif
 
 //calculator.c
 #include "calculator.h"
 int add(int a, int b) {
     return a + b;
 }
 int subtract(int a, int b) {
     return a-b;
 }
 int multiply(int a, int b) {
     return a*b;
 }
 int divide(int a, int b) {
     if(b! = 0) {
     return a/b;
     } else [
     //Handle diviaon by zero error 
     return 0;
     } }
     
     // main.c
     #include<stdio.h>
     #include "calculator.h"
     int main() {
     int num1 = 10, num 2 = 5;
     printf("Addition : %d\n",add(num1,num2));
     printf("Subtaction : %d\n",subtract(num1,num2));
     printf("Multiplication : %d\n",multiply(num1,num2));
     printf("Division : %d\n",divide(num1,num2));
     return 0;
     }