#include <stdio.h>
int main() {
    int payment_method;
    float mrp,quantity,base_amt,upidiscount,highvaluediscount,final_amt,goldmembershipdiscount;
    char item_name[100],gold_;
    printf("what you want to buy : ");
    scanf("%s",&item_name);
    printf("what is the mrp of the item : ");
    scanf("%f",&mrp);
    printf("what is the quantity : ");
    scanf("%f",&quantity);
    base_amt = mrp * quantity;
    printf("base amount : %.2f\n",base_amt);
    printf("enter the payment methode\n1.cash\n2.UPI\n3.card\n");
    printf("enter your choice : ");
    scanf("%d",&payment_method);
    printf("are you a gold member (y/n) : ");
    scanf(" %c",&gold_);
    printf("========bill=========\n");
    if (payment_method==2){
        upidiscount = base_amt * 0.05;
        printf("UPI discount = %.2f",upidiscount);

    }
    if (base_amt > 2000){
        highvaluediscount = base_amt * 0.1;
        printf("\nHigh value discount = %.2f",highvaluediscount);
    }
    if (gold_=='y' || gold_=='Y'){
        goldmembershipdiscount = base_amt * 0.15;
        printf("\nGold member discount = %.2f",goldmembershipdiscount);
    }
    final_amt = base_amt - upidiscount - highvaluediscount - goldmembershipdiscount;
    printf("\nfinal amount to be paid = %.2f",final_amt);
    printf("\n=====================");
    return 0;

}