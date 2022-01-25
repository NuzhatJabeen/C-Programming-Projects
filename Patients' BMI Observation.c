#include<stdio.h>
int main()
{
float wt_lb,ht_in,bmi;
printf("Enter the weight in pounds:");
scanf("%f",&wt_lb);
printf("Enter the height in inches:");
scanf("%f",&ht_in);

bmi=703*wt_lb/ht_in*ht_in;
printf("Body Mass Index is:%.1f\n,bmi");

if(bmi<18.5){
printf("Underweight");
}
else if(bmi>=18.5 && bmi<=24.9){
printf("Normal");
}
else if(bmi>=25.0 && bmi<=29.9){
printf("Overweight");
}
else if(bmi>=30.0){
printf("Obese");
}

else{
printf("Invalid input!");
}

return 0;
}
