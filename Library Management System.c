#include<stdio.h>
#include<string.h>
int main()
{
struct library
{
char book_name[100];
char author_name[100];
char lib[100];
int accession;
int flag;
float price;
};

int c;
int i=0;
int j=0;
int x;
int a;
char author[100];
while(x=1)
{
printf("1.Add book information:\n");
printf("2.Display book information:\n");
printf("3.List all books of given author:\n");
printf("4.List the title of specified book:\n");
printf("5.List the count of books in the library:\n");
printf("6.List the books in the order of accession no:\n");
printf("7.Exit:\n");
scanf("%d",&c);
{
printf("Enter the name of the book\n");
scanf("%s",lib[j].book_name);

gets(lib[j].book_name);
printf("Enter the author name\n");
scanf("%s",lib[j].author_name);

gets(lib[j].author_name);
printf("Enter price\n");
scanf("%f",&lib[j].price);
lib[j].accession=j;
j++;
break;
}


for(i=0;i<j;i++){
puts(lib[i].book_name);
puts(lib[i].author_name);
printf("%f ",lib[i].price);

if(lib[i].flag==0){
printf("Book is available\n");
}
else{
printf("Book is not available\n");
break;
}

printf("Enter the name of author\n");
gets(author);
for(i=0;i<j;i++){
if(lib[i].author_name){
puts(lib[i].book_name);

}
}
break;
}
{
printf("Enter the accession no. of the book\n");
scanf("%d",&a);
for(i=0;i<j;i++)
if(lib[i].accession)
{
puts(lib[i].author_name);
}
break;

printf("%d",j);
break;
}
for(i=0;i<j;i++){
puts(lib[i].author_name);
 }
break;
 }
return 0;
}
