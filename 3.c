#include<stdio.h>

int main() {
float gs;     //gs = gross salary
float ns;     //ns = net salary
float allowance;
float deduction;

printf("Enter the gross salary :");
scanf("%f", &gs);
if(gs > 10000){
allowance = 0.10 * gs;
deduction = 0.03 * gs;
}
else if(gs > 5000){
allowance = 0.07 * gs;
deduction = 0.02 * gs;
}

ns = gs + allowance - deduction;

printf("Net salary = %f\n",ns);

return 0;
}
