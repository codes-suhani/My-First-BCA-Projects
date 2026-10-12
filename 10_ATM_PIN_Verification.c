#include <stdio.h>

int main() {
   int entered_pin;
   printf("Enter your 4-digit PIN);
   scanf("%d", &entered_pin);
   if(entered_pin == 1234) {
   printf("PIN matched successfully! Access Granted.\n");
   }
   printf("Thank you for using our ATM.\n");
 return 0;
}
