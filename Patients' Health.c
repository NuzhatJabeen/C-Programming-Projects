#include<stdio.h>
int main()
{
int no_of_patients=0;
int no_of_tests=0;
int i=0;
int sum=0;
int cost=0;
int j;
printf("Enter the number of patients:");
scanf("%d",&no_of_patients);
printf("Enter the number of tests:");
scanf("%d",&no_of_tests);

for(i=1;i<=no_of_patients;i++){
printf("Patient id:%d\n",i);
printf("Enter the cost for %d tests for patient id:%d\n",no_of_tests,i);

for(j=0;j<no_of_tests;j++){
scanf("%d",&cost);
sum+=cost;

if(sum>=2000){
printf("Total :TK %d\n",sum);
printf("You are very ill. Do not panic. Our doctors are here to help");
}

else if(sum<=1999 && sum>=500){
printf("Total:TK %d\n",sum);
printf("Moderately ill");
}

else if(sum<500){
printf("Total TK:%d\n",sum);
printf("You are OK.Good Day");
}
else{
printf("Input invalid!");
}

return 0;
}
