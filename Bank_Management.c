#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct BankManagement{
int accNo;
char name[50];
int balance;
};
void depositemoney(struct BankManagement*account){
int amount;
printf("enter amount to deposite\n");
scanf("%d",&amount);
if(amount>0){
    account->balance+=amount;
    printf("deposite succesful. new balance:%d\n",account->balance);
}
else
{
    printf("invalid deposite amount \n");
}
}
void withdrawmoney(struct BankManagement*account)
{
    int amount;
    printf("enter amount to withdraw:");
    scanf("%d",&amount);

if(amount>0 && amount <=account-> balance){
    account->balance-=amount;

    printf("withdrawal succesfull.remaning balance:%d\n",account->balance);
}
else
{
    printf("insufficient balance\n");
}
}
void checkbalance(struct BankManagement * account){
printf("current balance for %d\n",account->balance);
}

void exitprogram(){
printf("exiting the program . thank you!\n");
exit(0);
}


int main(){
struct BankManagement user;
printf("enter account number\n");
scanf("%d",&user.accNo);

printf("enter user name\n");
scanf("%s",user.name);

user.balance=1500;

int c;
while(1){

    printf("----\n Bank Of Maharashtra----\n");
    printf("account holder:%s | account no: %d | balance:%d\n",user.name,user.accNo,user.balance);

    printf("\n 1. deposite money");
    printf("\n 2. withdraw money");
    printf("\n 3. check balance");
    printf("\n 4. Exit!");

    printf("enter your choice\n");
    scanf("%d",&c);

    switch(c){
case 1:
    depositemoney(&user);
    break;

case 2:
    withdrawmoney(&user);
    break;

case 3:
    checkbalance(&user);
    break;

case 4:
    exitprogram();
    break;

default:
    printf("INVALID CHOICE\n");
    }
}
getch();
}
