#include <stdio.h>

int main() {

 float gs;  //gs = gross sales
 float ns;  //ns = net sales
 float discount;

 printf("Enter the value of gross sales :");
 scanf("%f",&gs);

 if(gs > 20000){
 discount = 0.15 * gs;
 }
 else if(gs >10000){
 discount = 0.10 * gs;
 }
else{
discount = 0.05 * gs;
}

ns = gs - discount;

printf("Net sales = %f\n",ns);

return 0;
}
