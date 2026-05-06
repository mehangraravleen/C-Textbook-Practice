// Ravleen Mehangra 
// Sunday December 21 2026

// 3.1 THE PRINTF FUNCTION 
// printf is designed to display the contents of a string
// The format string may contain a an ordinary character 
// or a format specifer that begins with the % character 
// The information following the % character specifes how the
// value is converted from it's internal form (binary) into
// to printed characters. 

// general conversion specifer form is %m.pX or %-m.pX
// where p and m are integer constants and X is a letter
// m specifies the minimun field length. p is precision. 
// %[flags][width][.precision][length]specifier


// %d displays integer in decimal (base 10)
// %e floating point number in exponetial format
// %f floating point number in fixed decimal format
// %g either floating point or expoential based on number size 

// Escape Sequences 
// Alert (bell)     \a; causes audiable beep 
// Backspace        \b; moves the cursor back one position 
// New Line         \n; advances cursor to new line 
// Horizontal Tab   \t; moves cursor to next tab stop
// quation          \"; since " " can't be used inside " " 
// dash             \\; when you write \ computer assumes 
// \n, to print a \, use \\ 

// 3.2 THE SCANF FUNCTION 
// scanf reads input according to a particular format
// when it's called, it starts processing information left 
// to right. If item is read correctly scanf continues processing 
// if not, scanf returns without looking at the rest of the string. 
// Scanf peeks at the last newline character, but doesn't read it
// the next call to scanf will read that newline as the first 
// character. When asked to read an integer, scanf searches for a
// digit, a plus or minus sign, and then reads the digit until 
// it reaches the first none digit. For floating-point numbers, scanf
// looks for a plus or mius signe, followed by digits, possibly 
// containing a decimal, follwed by an exponent (optional).
// %g, %f, and %e are interchagnable with scanf. 
// when scanf comes across a character that can't be part of the current
// item, the character is put back to be read again during the scanning 
// of the next input item or the next call to scanf.

// I DON'T UNDERSTAND THIS PART
// when scanf encounters white space characters, it reads it until 
// it comes across the first non-white space character. One white 
// space is the same as any number. When it encounters a non-white space 
// character in a format string, scanf compares it with the next input 
// characters, if the two match, scanf discards the input character 
// and continues on processing the format string. If the characters don't 
// don't match, scanf puts the offending character back into the input, then 
// aborts. 

// putting a newline character at the end of a scanf format string is usually
// not good. to scanf, a newline character is the same as a space. both cause 
// scanf to advance to the next non-white space character.

// %d for integers in base 10 and %i reads for base detection; printf doesn't
// care, only scanf does.

// Exercise 3 DID NOT UNDERSTAND 










/* Prints int and float values in various formats */
#include <stdio.h>
int main(void){
    int i;
    float x;
    i = 40;
    x = 839.21f;
    printf(" |%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf(" |%10.3f|%10.3e|%-10g|\n", x, x, x);
    printf("%6d,%4d\n", 86, 1040);
    return 0;

}

/* Adds two fractions */
#include <stdio.h>
int addFraction(void) {
    int numl, denoml, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    scanf("%d/%d", &numl, &denoml);
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    result_num = numl * denom2 + num2 * denoml;
    result_denom = denoml * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}
