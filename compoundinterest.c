#include <stdio.h>
#include <math.h>

int main(){
    // COMPOUND INTEREST CALCULATOR //
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound interest calculator\n");

    printf("Enter the value of principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the value of interest rate(r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times Compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded , timesCompounded * years);

    printf("After %d years, the total will be $%0.2lf", years, total);

    return 0;

}

