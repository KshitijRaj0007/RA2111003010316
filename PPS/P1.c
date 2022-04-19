#include <stdio.h>

int main() {
    int amount_given,bill_amount;
    int quo,rem;
    printf("Enter the bill amount and amount given: ");
    scanf("%d %d",&bill_amount,&amount_given);
    quo=bill_amount/amount_given;
    rem=bill_amount%amount_given;
    printf("Quotient is: %d\n",quo);
    printf("Remainder is: %d",rem);

    return 0;
}
