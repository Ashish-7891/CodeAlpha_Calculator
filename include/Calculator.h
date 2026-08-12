#ifndef CALCULATOR_H
#define CALCULATOR_H

/* Calculator functions */

void welcomeScreen();

void instructions();

void loadingAnimation();

void menu();


/* Arithmetic operations */

float add(float a, float b);

float subtract(float a, float b);

float multiply(float a, float b);

float divide(float a, float b);


/* Validation */

int isValidChoice(int choice);

int isDivisionByZero(float number);


#endif
