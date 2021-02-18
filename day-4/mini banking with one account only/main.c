#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ch;
float totalAmount=1000, depositeAmount=0, withdrawAmount=0, transferAmount=0, totalDepositedAmount=0, totalWithdrawnAmount=0, totalTransferedAmount=0;

int menu();
void deposite();
void withdraw();
void transfer();
void showDetails();



int main(){
    printf("\n \t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\ Hello Welcome to the Bank!!  \xB2\xB2\xB2\xB2");
    while(1){
        switch(menu()){
        case 1:
            deposite();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            transfer();
            break;
        case 4:
            showDetails();
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}

int menu(){
    printf("\n\n\n\n1. Deposite Amount");
    printf("\n2. Withdraw Amount");
    printf("\n3. Transfer Amount");
    printf("\n4. Show Details");
    printf("\n5. Exit");
    printf("\n\n\n\nPlease enter your choice:");
    scanf("%d",&ch);

    return (ch);
}

void deposite(){
    printf("\nPlease enter the amount you want to deposite:Rs.");
    scanf("%f",&depositeAmount);
    totalAmount += depositeAmount;
    totalDepositedAmount += depositeAmount;
    printf("\nDeposited Successfully");
    printf("\nRs.%f deposited to your account...\nBalance :Rs.%f", depositeAmount, totalAmount);
}

void withdraw(){
    printf("\nPlease enter the amount you want to withdraw:Rs.");
    scanf("%f",&withdrawAmount);
    if(totalAmount >= withdrawAmount){
        totalAmount -= withdrawAmount;
        totalWithdrawnAmount += withdrawAmount;
        printf("\nWithdrawn Successfully");
        printf("\nRs.%f deducted from your account...\nBalance left:Rs.%f", withdrawAmount, totalAmount);
    } else {
        printf("\nSorry your account balance is less!!");
    }
}
void transfer(){
    printf("\nPlease enter the amount you want to transfer:Rs.");
    scanf("%f",&transferAmount);
    if(totalAmount >= transferAmount){
        totalAmount -= transferAmount;
        totalTransferedAmount += transferAmount;
        printf("\nTransfered Successfully");
        printf("\nRs.%f deducted from your account...\nBalance left:Rs.%f", transferAmount, totalAmount);
    } else {
        printf("\nSorry your account balance is less!!");
    }
}

void showDetails(){
    printf("\nTotal account balance is:Rs.%f",totalAmount);
    printf("\nTotal deposited amount is:Rs.%f",totalDepositedAmount);
    printf("\nTotal withdrawn amount is:Rs.%f",totalWithdrawnAmount);
    printf("\nTotal transfered amount is:Rs.%f",totalTransferedAmount);
}
