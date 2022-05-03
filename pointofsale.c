// Point-of-sale
#include <stdio.h>

void main(void){
    int code,qty;
    float price,amount,totalamount,cash,change;
    char addAnother;

//do-while loop -> post test (check condition after execute)
//While-loop -> pre-test (check condition before execute) -not used
//for- loop -> pre-test

do{
        system("cls");
//clear screen before next iteration
printf("=====================================\n");
printf("========Fruit Store Main Menu========\n");
printf("====================================\n\n");
printf("[1] Apple \t\t\tRS:70.00\n");
printf("[2] Grapes \t\t\tRS:100.00\n");
printf("[3] Mango \t\t\tRS:80.00\n");
printf("[4] Orrenge\t\t\tRS:150.00\n");
printf("[5] Pinapple \t\t\tRS:90.00\n");

//choose product and quantity
printf("\nEnter Product Code\t: ");
scanf("%d",&code);
printf("\nEnter Quantity\t: ");
scanf("%d",&qty);

//Added price to product based on user enter code
switch(code){
case 1: price = 70.00;
break;
case 2: price = 100.00;
break;
case 3: price = 80.00;
break;
case 4: price = 150.00;
break;
case 5: price = 90.00;
break;
}

//check amount by multiply price by quantity
amount= price * qty;
printf("\nAmount: %.2f",amount);

totalamount = totalamount +amount;
printf("\nTotal Amount\t: %.2f",totalamount);
printf("\nAdd another order(y/n)? ");
addAnother = getche();
  }while(addAnother == 'y'|| addAnother == 'Y');

  do{
    printf("\nCash Recived: ");
    scanf("%f", &cash);
  }while(cash < totalamount);


  change = cash - totalamount;
  printf("==============================");
  printf("\nChange\t\t: %.2f RS\n",change);
  printf("\nThank You Come Again!\n");
  printf("==============================\n");
}
