#include<stdio.h>
#include<math.h>
int main(){
float a, b,c,discriminant,root1,root2;
printf("enter a,b,c values:");
scanf("%f",&a,&b,&c);
discriminant=(b*b)-(4*a*c);
if(discriminant>0){
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("real and distinct roots:%.2f and %.2f/n",root1,root2);
}
else if(discriminant==0){
root1=-b/(2*a);
printf("real and equal roots:%.2f and %.2f/n",root1,root1);
}
else{
printf("roots are imaginary (complex)/n");
}
return 0;
}
