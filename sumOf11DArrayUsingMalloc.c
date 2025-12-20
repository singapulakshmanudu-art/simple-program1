#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*a,sum=0;
printf("enter size:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
free(a);
return 0;
}
