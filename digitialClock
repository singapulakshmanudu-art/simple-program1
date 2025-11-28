#include <stdio.h>
#include <time.h>
int main() {
while (1) {
time_t now;
struct tm *localTime;
now = time(NULL);
localTime = localtime(&now);
printf("\r%02d:%02d:%02d",localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
fflush(stdout); 
}
return 0;
}
