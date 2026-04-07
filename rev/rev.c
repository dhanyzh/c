// Q1. QuickKart Online Store – Checkout Discount System

// QuickKart is an online shopping platform handling thousands of daily orders. To boost sales and encourage digital payments, it wants to implement a smart billing system.

// Key Business Objective
// Design a system that:

// Promotes wallet payments
// Increases bulk purchases
// Rewards loyal customers

// Key Business Requirements

// Base Amount Calculation
// Base Amount = ∑ (Quantity × Price)
// Wallet Payment Discount
// If payment is through wallet → 4% discount
// Else → No discount
// Wallet Discount = 4% × Base Amount
// Bulk Purchase Discount
// If total > ₹3,000 → 12% discount
// Bulk Discount = 12% × Base Amount
// Premium Customer Discount
// Premium users → Extra 6% discount
// Premium Discount = 6% × Base Amount
// Final Amount
// Final Amount = Base Amount − (Wallet + Bulk + Premium Discount)

#include <stdio.h>
int main(){
    int payment_method;
    float qty,price,base_amt,wallet_discount;
    char item_name[50];
    printf("enter item name: ");
    scanf("%s",item_name);
    printf("enetr the price: ");
    scanf("%f",&price);
    printf("enter the quantity reqduired: ");
    scanf("%f",&qty);
    base_amt = qty * price;
    printf("the baseamount is : %.2f",base_amt);
    printf("\nenter the payement method\n1.card\n2.wallet\n3.upi");
    printf("\nenter the choice: ");
    scanf("\n %d",&payment_method);
    printf("\n======bill======");
    if (payment_method == 2){
        wallet_discount = base_amt * 0.04;
        printf("\nwallet discout: %.2f",wallet_discount);
    }
    return 0;
}
