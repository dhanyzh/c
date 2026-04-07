//account creation,pin generation, withdrawal,min balance threshold
#include <stdio.h>
int main() {
    int pin,withdrawal_amount,min_balance;
    printf("enter the pin : ");
    scanf("%d",&pin);
    printf("enter the withdrawal amount : ");
    scanf("%d",&withdrawal_amount);
    printf("enter the minimum balance threshold : ");
    scanf("%d",&min_balance);
    if (withdrawal_amount > min_balance){
        printf("you cannot withdraw the amount");
    }
    else{
        printf("you can withdraw the amount");
    }
    return 0;
}