#include <stdio.h>
#include <math.h>
int main () {
int sum = 0;
int a,k;
scanf("%i",&k);
for (int i=1;i<=k;i++) {
scanf ("%i",&a);
sum += a*a*a*pow(-1,i+1);
}
printf("%i",sum);
return 0;
}

