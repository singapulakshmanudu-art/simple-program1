#include<stdio.h>
#include<unistd.h>
int main(){
  while(1){
printf("RED\n");
sleep(3);
printf("GREEN\n");
sleep(3);
printf("YELLOW\n");
sleep(2);
  }
return 0;
}
