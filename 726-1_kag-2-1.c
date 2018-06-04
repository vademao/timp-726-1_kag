#include <stdio.h>
int main (){
int a = 0;
int k = 0;
int n=0;
int sum=0;
scanf("%i",&k);
for(int i=1;i<=k;i++ ) {
scanf("%i",&a);
sum += a;
}
double avg = 0;
avg = sum/k;
printf("%f", avg);
return 0;
}



