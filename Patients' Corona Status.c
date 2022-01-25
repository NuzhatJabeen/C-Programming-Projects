#include<stdio.h>
#include<string.h>
int main()
{
struct Patient
{
int Registration_num;
char Name[100];
int Age;
char Gender[50];
int Contact_num;
char Physician_name[50];
char Corona_status[20];
}
patient[50];
int i;
int num;
int add()
{
int n=0;
int gender=0;
int c=0;
printf("Enter the number of patients:");
scanf("%d",&n);
num+=n;

for(i=0;i<num;i++){
printf("Enter the registration number:");
scanf("%d",&patient[i].Registration_num);
gets(patient[i].Name);

printf("Enter corona status: 1.Had Corona\n 2.Did not had Corona");
scanf("%d",&c);
printf("The option is:");

if(c==1){
strcpy(patient[i].Corona_status,"Did not had Corona");
 }
 }
}
int display()
{
int gender=0;
 {
printf("Registration number of the patient is:");

scanf("%d",&patient[i].Registration_num);
printf("Age of the patient is:");
scanf("%d",&patient[i].Age);
printf("Name of the patient is:");
scanf("%s",&patient[i].Name);
printf("Gender of the patient is:");
scanf("%s",&patient[i].Gender);

printf("Enter the gender of the patient:\n 1.Male\n 2.Female\n");
printf("The option is:");
scanf("%d",&gender);

if(gender==1){
strcpy(patient[i].Gender,"Male");
}
else if(gender==2){
strcpy(patient[i].Gender,"Female");
}
printf("Enter the contact number of the patient:");
scanf("%d",&patient[i].Contact_num);
printf("Enter the physician's name:");
scanf("%s",&patient[i].Physician_name);
  }
}

int append()
{
for(i=0;i<num;i++){
if(strcmp(patient[i].Corona_status,"Had before")==0)
  {
printf("Registration number is:%d\n",patient[i].Registration_num);
printf("Name of the patient:");
puts(patient[i].Name);
  }
 append();
 }
 }
int delete()
{
char name[20];
printf("Delete the name you want:");
gets(name);

if(strcmp(patient[i].Name,name)==0){
patient[i].Registration_num=patient[i+1].Registration_num;
strcpy(patient[i].Name,patient[i+1].Name);

patient[i].Age=patient[i+1].Age;

strcpy(patient[i].Gender,patient[i+1].Gender);
patient[i].Contact_num=patient[i+1].Contact_num;

strcpy(patient[i].Corona_status,patient[i+1].Corona_status);
   }
 }
}
int modify()
{
int r=0;
int i;
int num;
int patient;
char physi[50];
int physician=0;
printf("Enter the new registration number:");
scanf("%d",&r);

for(i=0;i<num;i++){
if(r==patient[i].Registration_num)
 {
printf("Enter a new physician's name:");
gets(patient[i].Physician_name);
printf("Enter a new contact number:");
scanf("%d",&patient[i].Contact_num);
   }
 }
}
int main()
{
int op;
while(1){
printf("1.Add patient\n");
printf("2.Display all patients\n");
printf("3.Delete patient\n");
printf("4.Modify patient\n");
printf("5.Exit");
scanf("%d",&op);

switch(op){
case 1:
system("c");
display();
break;

case 2:
system("c");
append();
break;

case 3:
system("c");
delete();
break;

case 4:
system("c");
modify();
break;

case 5:
system("c");
return 0;
break;

default:
printf("Error!");
break;
}
 }
}
