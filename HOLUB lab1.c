#include <stdio.h>
int main() {
float t, t1, t2, t3;

printf("Enter 3 values:\n");
scanf("%f %f %f", &t1, &t2, &t3);
t = ((t1 + t2 + t3)/3)/ 3;
printf("\nTime required to eat the pie: %.2f hours", t);
return 0;
}
