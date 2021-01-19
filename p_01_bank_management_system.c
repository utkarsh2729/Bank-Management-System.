#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int menu();
void deposit();
void withdraw();
void transfer();
void checkdetails();
int TotalAmount = 2000,trns,ac,amt,act,amnt,acnt,TotalDeposit=0,TotalWithdrawn=0,TotalTrnsfd=0;
void main()
{
    while(1)
 {
      switch(menu())
    {
     case 1:
             deposit();
             TotalDeposit+=amt;
             break;
     case 2:
            withdraw();
            if(amnt<=TotalAmount)
            TotalWithdrawn+=amnt;
             break;
     case 3:
             transfer();
             if(trns<=TotalAmount)
             TotalTrnsfd+=trns;
             break;
     case 4:
             checkdetails();
             break;
     case 5:
          exit(0); 
        default:
          printf("Invalid Choise.");
    }
 } 
  getch();
}

int menu()
{
    int n;
    printf("\n\n\t\t\t*** Bank Management System ***\n\n\t\t");
    
    printf("\n1. Deposit Amount. ");
    printf("\n2. Withdraw Amount. ");
    printf("\n3. Transfer Amount. ");
    printf("\n4. Check Details. ");
    printf("\n5. Exit.\n ");
    printf("\nChoose the right option from above displayed options:\n");
    scanf("%d",&n);
    return(n);

    
}

void deposit()
{
    printf("Enter 14-Digit bank Account number:\n ");
    scanf("%d",&ac);
    if(ac<14 && ac>14)
    {
        printf("Invalid Account Number!");
    }
    else 
    { int t_m;
    printf("\nEnter the amount you want to Deposit:\n");
    scanf("%d",&amt);
    t_m = (TotalAmount+amt);
    printf("Total Amount after Deposit  = %d",t_m);
    }
}

void withdraw()
{
    printf("Enter 14-Digit bank Account number:\n ");
    scanf("%d",&act);
    if(act<14 && act>14)
    {
        printf("Invalid Account Number!");
    }
    else
    {
     int w_a;
    printf("\nEnter the amount you want to Withdraw:\n");
    scanf("%d",&amnt);
    if(amnt<=TotalAmount)
     {
         w_a = (TotalAmount-amnt);
         printf("Total Amount after Withdraw  = %d",w_a);
     }
     else
     {
        printf("\nLess Amount.");
     }
    
    }
}

void transfer()
{
    int t_n;
    printf("Enter 14-Digit bank Account number:\n ");
    scanf("%d",&acnt);
    if(acnt<14 && acnt>14)
    {
        printf("Invalid Account Number!");
    }
    else
    {
        printf("\nEnter the Amount you want to transfer:\n");
        scanf("%d",&trns);
        if(trns<=TotalAmount)
        {
            t_n = (TotalAmount-trns);
            printf("Total amount after transfer = %d",t_n);
        }
        else
        {
            printf("Less Amount in your account.\nSORRY! Request cannot Proceed");
        }
        
    }
    
}

void checkdetails()
{
    int acount;
    printf("Enter 14-Digit bank Account number:\n ");
    scanf("%d",&acount);
    if(acount<14 && acount>14)
    {
        printf("Invalid Account Number!");
    }
    else
    {
        printf("Total Amount is: %d\n",TotalAmount);
        printf("Total Deposited Amount is: %d\n",TotalDeposit);
        printf("Total Withdrawn Amount is: %d\n",TotalWithdrawn);
        printf("Total Transfered Amount is: %d\n",TotalTrnsfd);
    }
    
}