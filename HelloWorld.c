//C ATM project
#include<stdio.h>
//#include<stddef.h> 
int main(){
    int pin;
    int balance=200000;
    int correctPin=9898;
    int attempts=3;
    while(attempts>0){printf(" enter pin %d remaining: ",attempts);
    scanf("%d",&pin);
    if(pin==correctPin){printf("Namaste  your balance is %d",balance);
    break;}
    else {printf("incorrect password");attempts--;}
     }
    if (attempts==0){printf("maximum trial chance reached");}
    return 0;
}