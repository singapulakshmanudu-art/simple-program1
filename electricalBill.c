#include<stdio.h>
int main(){
  int unit;
  float bill;
printf("enter units consumed:");
scanf("%d",&unit);
if(unit<=100)
bill=unit*1.5;
else if(unit<=300)
  bill=100*1.5+(unit-100)*2.5;
else
  bill=100*1.5+200*2.5+(unit-300)*4.0;
printf("electric bill:%.2f",bill);
return 0;
}
