#include<stdio.h>
#include<string.h>
struct Cars
{
char Company[100];
char Model[100];
double Price;
}
cars[100];
int num;
int i;
int a;

int Read()
{
FILE *fptr;
FILE *fptr1;
fptr=fopen("Input.txt","w");

int c;
c=0;
printf("Enter the number of cars:\n");
scanf("%d",&c);

for(i=a;i<a+c;i++)
{
printf("Enter the name of the company:\n");
gets(cars[i].Company);
printf("Enter the name of the model:\n");
gets(cars[i].Model);
printf("Enter the price of the car:\n");
scanf("%lf",&cars[i].Price);
}
a+=c;
fprintf(fptr,"%d",a);
fclose(fptr);

fptr1=fopen("Input.txt","r");
if(fptr1==NULL)
{
printf("Problem in opening the file");    }
fscanf(fptr1,"%d",&a);

printf("There are %d cars in this function:",a);

for(i=0;i<a;i++)
{
printf("Model of the car is:\n");
puts(cars[i].Model);
}
}

int Populate()
{
FILE *fptr2;
fptr2=fopen("Car information.txt","w");

for(i=0;i<a;i++)
{
fputs(cars[i].Company,fptr2);
fputs(cars[i].Model,fptr2);
fprintf(fptr2,"%d",cars[i].Price);
}
fclose(fptr2);
}

int Remove()
{
char com[100];
gets(com);

FILE *fptr3;
fptr3=fopen("Car information.txt","r");

if(fptr3==NULL)
{
printf("Problem in opening the file!");
}
for(i=0;i<a;i++)
{
if(strcmp(cars[i].Company,com)==0)
{
fgets(cars[i].Model,100,fptr3);
strcpy(cars[i].Model,cars[i+1].Model);
fgets(cars[i].Company,100,fptr3);
strcpy(cars[i].Company,cars[i+1].Company);
fscanf(fptr3,"%lf",&cars[i].Price);
cars[i].Price=cars[i+1].Price;
a--;
}
}
fclose(fptr3);
}

int main()
{
int option=0;
while(1)
{
printf("\n1.Add and Display\n2.Store\n3.Delete\n4.Exit\n");
printf("Option:\n");
scanf("%d",&option);

switch(option)
{
case 1:
system("ch");
Read();
break;

case 2:
system("ch");
Populate();
break;

case 3:
system("ch");
Remove();
break;

case 4:
return 0;
break;

default:
system("ch");
printf("Invalid Input!");
break;
}
}
return 0;

}
