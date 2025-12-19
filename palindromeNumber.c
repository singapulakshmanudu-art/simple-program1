#include <stdio.h>
int main() {
int num, originalNum, reversedNum = 0, remainder;
printf("Enter an integer: ");
scanf("%d", &num);
originalNum = num;  
while(originalNum != 0) {
remainder = originalNum % 10;          
reversedNum = reversedNum * 10 + remainder;
originalNum /= 10;                     
}
if(reversedNum == num)
printf("%d is a Palindrome number.\n", num);
else
printf("%d is not a Palindrome number.\n", num);
return 0;
}
