#include <stdio.h>
int fact(int n) {
int f = 1, i;
for (i = 1; i <= n; i++)
f = f * i;
return f;
}
int ncr(int n, int r) {
return fact(n) / (fact(r) * fact(n - r));
}
int main() {
int n, r;
printf("Enter n and r: ");
scanf("%d %d", &n, &r);
if (r > n || n < 0 || r < 0) {
printf("Invalid input");
}
else {
printf("nCr = %d", ncr(n, r));
}
return 0;
}
