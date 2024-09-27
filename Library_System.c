#include <stdio.h>
#include<math.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    printf("You prompted to insert Book ID : ");
    scanf("%d", &bookID);

    printf("Insert Due Date : ");
    scanf("%d", &dueDate);

    printf("Insert Return Date : ");
    scanf("%d", &returnDate);

 
    if (returnDate > dueDate) {
    	
        daysOverdue = returnDate - dueDate;
        
    } else {
    	
        daysOverdue = 0;
        
    }

   
    if (daysOverdue > 0 && daysOverdue <= 7) {
        fineRate = 20; 
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue >= 15) {
        fineRate = 100;  
    } else {
        fineRate = 0; 
    }

    fineAmount = daysOverdue * fineRate;

    printf("\nCalculations\n");
    printf("The book ID is: %d\n", bookID);
    printf("The Due Date is: %d\n", dueDate);
    printf("Return Date is: %d\n", returnDate);
    printf(" The days overdue are: %d\n", daysOverdue);
    printf("The fine rate is: Ksh. %d per day\n", fineRate);
    printf("The fine amount is: Ksh. %d\n", fineAmount);


    return 0;
}
