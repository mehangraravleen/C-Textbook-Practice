// Ravleen Mehangra 
// Wednesday December 10 2026

// CHAPTER 2

// Exercise 1 

    #include <stdio.h>

    int helloWorld() {
        printf("Hello, World\n");
        return 0;
    }

// Exercise 2

    #include <stdio.h> // preprocessor directive 
 
    int hi(void) { // function definition 
        printf("Parkinson's Law: \nWork Expands so as to "); // print statement 
        printf("fill the time\n"); // print statement 
        printf("avaliable for it's completion. \n"); // print statement 
        return 0; // return statement
    }

// Exercise 3

    int dweight(void) {
        int height = 8, length = 10, width = 12, volume, weight; 
        volume = height * width * length; 

        printf("Dimensions %dx%dx%d\n ", length, width, height); 
        printf("volume (cubic inches): %d\n", volume); 
        printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166); 
        return 0; 
    }

// Exercise 4 

    int idk(void) {
        int x; 
        float y; 
        printf("%d, %f", x, y); 
        return 0; 
    }


// PROGRAMMING PROJECT 1

    int picture(void) {
        printf("        *\n"); 
        printf("       *\n"); 
        printf("      *\n"); 
        printf("*    *\n"); 
        printf(" *  *\n"); 
        printf("  *\n"); 
        return 0; 
    }

// PROGRAMMING PROJECT 2 + 3

    int volumeOfSphere() {
        float sphereRadius = 0; 
        printf("Enter Radius: "); 
        scanf("%f", &sphereRadius); 
        float volume = 4.0f/3.0f * 3.14 * (sphereRadius * sphereRadius * sphereRadius); 
        printf("Volume: %f", volume); 
        return 0; 
    }

// PRGRAMMING PROJECT 4

    int taxAmount() {
        float money; 
        printf("Enter Dollar-Cent amount: "); 
        scanf("%f", &money); 

        float tax = money * 0.05; 
        float withTax = money + tax; 
        printf("Total with Tax: %f", withTax); 
        return 0; 
    }

// PROGRAMMING PROJECT 5 + 6

    int polynomial(void) {
        float x; 
        printf("Enter value for x: "); 
        scanf("%f", &x); 
        
        float ans, ans2; 
        ans = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 
        5 * ( x * x * x) - (x * x) + (7 * x) - 6; 

        ans2 = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; 

        printf("Value of equation: %f", ans2); 
        return 0; 
    }

// PROGRAMMING PROJECT 7

    int paySmallest(void) {
        int x; 
        printf("Enter US dollar amount: "); 
        scanf("%d", &x); 

        int twenties = x / 20; 
        x = x - twenties * 20; 

        int tens = x / 10; 
        x = x - tens * 10; 

        int fives = x / 5; 
        x = x - fives * 5; 

        printf("$20 dollar bills: %d\n", twenties); 
        printf("$10 dollar bills: %d\n", tens); 
        printf("$5 dollar bills: %d\n", fives); 
        printf("$1 dollar bills: %d\n", x);

        return 0; 

    }

// PROGRAMMING PROJECT 8

    #include <stdio.h>

    int remainingBalance(void) {

        float loan, interestRate, monthlyPayment; 
        float principalReduction, interestAdded; 
    
        printf("Enter amount of loan: "); 
        scanf("%f", & loan); 
        printf("Enter interest rate: "); 
        scanf("%f", &interestRate); 
        printf("Enter monthyly payment: "); 
        scanf("%f", &monthlyPayment); 

        float annualRate = interestRate / 100; 
        float monthlyRate = annualRate / 12; 

        interestAdded = loan * monthlyRate; 
        principalReduction = monthlyPayment - interestAdded;
        loan = loan - principalReduction; 

        printf("\n Balance after first payment: %2.f", loan); 
    
        interestAdded = loan * monthlyRate; 
        principalReduction = monthlyPayment - interestAdded;
        loan = loan - principalReduction; 

        printf("\n Balance after second payment: %2.f", loan); 
    
        interestAdded = loan * monthlyRate; 
        principalReduction = monthlyPayment - interestAdded;
        loan = loan - principalReduction; 

        printf("\n Balance after third payment: %f", loan); 

        return 0; 

    }

int hellooo(void) {
    printf("How are ya? "); 
    return 0; 
}

int main(void) { 
    remainingBalance(); 
    hellooo(); 
    return 0; 
}




