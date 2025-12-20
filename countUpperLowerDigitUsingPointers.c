#include <stdio.h>
int main() {
char s[200], *p;
int lc = 0, uc = 0, dg = 0, ot = 0;
printf("Enter string: ");
fgets(s, sizeof(s), stdin);
p = s;
while (*p != '\0') {
if (*p >= 'a' && *p <= 'z')
lc++;
else if (*p >= 'A' && *p <= 'Z')
uc++;
else if (*p >= '0' && *p <= '9')
dg++;
else
ot++;
p++;   
}
printf("Lowercase = %d\nUppercase = %d\nDigits = %d\nOthers = %d\n",lc, uc, dg, ot);
return 0;
}
