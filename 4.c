#include<stdio.h>

int main()
{
int a;

printf("Enter the value of a :");
scanf("%d", &a);

if(a%7 == 0){
printf("%d is divisible by 7.\n");
}
else{
printf("d is not divisible by 7.\n");
}

return 0;
}
