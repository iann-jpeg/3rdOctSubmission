#include <stdio.h>

int main() {
    int age;
    double Income;

    printf("MAJI MOTO BANK SERVICES\n");

    printf("On a light note enter your age before proceeding: ");
    scanf("%d", &age);

    if (age <= 0) {
        printf("Invalid entry You will have to provide valid age.\n");
        return 1; 
    }

    printf("Provide your income per annum : ");
    scanf("%lf", &Income);

    if (Income <= 0) {
        printf("Invalid command re-enter.\n");
        return 1; 
    }

    if (age >= 21 && Income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately we are unable to offer you a loan at this time.\n");
        if (age < 21) {
            printf("Valid entry or age is 21 and above.\n");
        }
        if (Income < 21000) {
            printf("Must be of annual income of sh.21,000 and Above.\n");
            return 1;
        }
    }

    printf("KARIBU TENA SUPU YA MAZIWA BANKING SERVICES\n");

    return 0;
}