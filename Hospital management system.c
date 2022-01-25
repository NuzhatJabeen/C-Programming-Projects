#include<stdio.h>
#include<string.h>
#include <stdlib.h>
    struct Reg
{
    char User[30];
    char Name[30];
    char Phone[20];
    char email[50];
    char PIN[20];

}R;
struct paient
{
    char name[30];
    int age;
    char disease[20];
    int cabin;
    int phone;
    int ephone;
}pat[100];
int num,n=0,sum,i,j,a,b;

int show()
{
    FILE *ptnt = fopen("patient info.txt","r");
    if(ptnt == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        ptnt = fopen("patient info.txt","w");
        fclose(ptnt);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(pat, sizeof(struct paient),100, ptnt);
    fclose(ptnt);
}
void take()
{
    FILE *ptnt = fopen("patient info.txt","w");
    if(ptnt == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(pat, sizeof(struct paient),num, ptnt);

    fclose(ptnt);
}
void add()
{
printf("Already %d data is in the database.\n\n",num);//how many inputs
printf("Number of entry you want to add: ");
scanf("%d",&n);
sum = n+num;

for(i=num, j=0; i<sum; i++)
{
   fflush(stdin);
   printf("\nEnter patient's name: ");
   gets(pat[i].name);
   fflush(stdin);
   printf("Enter the age: ");
   scanf("%d",&pat[i].age);
   fflush(stdin);
   printf("Enter disease: ");
   gets(pat[i].disease);
   fflush(stdin);
   printf("Enter cabin no: ");
   scanf("%d",&pat[i].cabin);
   fflush(stdin);
   printf("Enter contact number: ");
   scanf("%d",&pat[i].phone);
   fflush(stdin);
   printf("Enter emergency contact number: ");
   scanf("%d",&pat[i].ephone);
   j++;
   a++;
   num++;
}
}
void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(pat[i].name);
        printf("Disease = ");
        puts(pat[i].disease);
        printf("Cabin no = %d\nPhone number = 0%d\nAge=%d",pat[i].cabin,pat[i].phone,pat[i].age);
        printf("\n\n");
    }
}
void search()
{
    int s,h,f,num,g;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Cabin no.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s==num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(pat[s].name);
            printf("Disease = ");
            puts(pat[s].disease);
            printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",pat[s].cabin,pat[s].phone,pat[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if((strcmp(u,pat[g].name))==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(pat[g].name);
                printf("Disease = ");
                puts(pat[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",pat[g].cabin,pat[g].phone,pat[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,pat[g].disease)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(pat[g].name);
                printf("Disease = ");
                puts(pat[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",pat[g].cabin,pat[g].phone,pat[g].age);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(h==4)
    {
        int f=0;
        printf("Enter Cabin number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==pat[g].cabin)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(pat[g].name);
                printf("Disease = ");
                puts(pat[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",pat[g].cabin,pat[g].phone,pat[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==pat[g].phone)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(pat[g].name);
                printf("Disease = ");
                puts(pat[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",pat[g].cabin,pat[g].phone,pat[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==pat[g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(pat[g].name);
                printf("Disease = ");
                puts(pat[g].disease);
                printf("Cabin no = %d\nPhone number = 0%d\nAge = %d",pat[g].cabin,pat[g].phone,pat[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");

}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(pat[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease=");
                gets(pat[p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&pat[p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Cabin no=");
                scanf("%d",&pat[p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Phone no =");
                scanf("%d",&pat[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
int release()
{
    int f,h,days=0,amount=0,bill=0,stat=0;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Cabin\n6.Remove phone number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            printf("How many days the patient was admitted : ");
            scanf("%d",&days);
            printf("Amount per day");
            scanf("%d",&amount);
            bill=days*amount;
            printf("Total Bill is : %d TK",bill);

            printf("1.Paid\n2.Not Paid\n");
            printf("\nOption : ");
            scanf("%d",&stat);
            if(stat==1)
            {
              while(f<num)
            {
                strcpy(pat[f].name,pat[f+1].name);
                strcpy(pat[f].disease,pat[f+1].disease);
                pat[f].age=pat[f+1].age;
                pat[f].cabin=pat[f+1].cabin;
                pat[f].phone=pat[f+1].phone;
                f++;
            }
            num--;
            }
            else
                if(stat==2)
            {
                printf("Patient does not pay the bill");
                return 0;
            }


        }
        else if(h==2)
        {
            strcpy(pat[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(pat[f].disease,"Cleared");
        }
        else if(h==4)
        {
            pat[f].age=0;
        }
        else if(h==5)
        {
            pat[f].cabin=0;
        }
        else if(h==6)
        {
            pat[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
int home()
{
    show();
 int opts=0;
    while(1)
    {
        printf("1.Add Information about the patient.");
        printf("\n2.View Information.\n3.Search\n4.Edit Information\n5.Release of any patient\n6.Logout\n");
        scanf("%d",&opts);

        switch(opts)
        {
        case 1:
        system("cls");
        add();
        break;

        case 2:
        system("cls");
        view();
        break;

        case 3:
        system("cls");
        search();
        break;

        case 4:
        system("cls");
        edit();
        break;

        case 5:
        system("cls");
        release();
        break;

        case 6:
        system("cls");
        take();
        return 0;
        break;


        default:
        take();
        system("cls");
        printf("Invalid Input!\n");
        break;
        }
    }
    return 0;
}
int Reg()
{

    FILE *admn,*admnr;
    admn=fopen("Admin.txt","w");
    admnr=fopen("Admin.txt","r");
    if(admnr==NULL)
    {
        printf("Error opening file");
    }
    int a=0,b=0,c=0,i,m=0,q=0,p=0;
    {
        //User Name Input
        fflush(stdin);
        printf("Enter the user name : ");
        gets(R.User);
        fputs(R.User,admn);
    }

    {
      //Name Input
      fflush(stdin);
      printf("Enter your name : ");
      gets(R.Name);
      fputs(R.Name,admn);
    }

    {
      //Phone Number Input
      fflush(stdin);
      printf("Enter your phone number : ");
      gets(R.Phone);
      fputs(R.Phone,admn);
    }


    fflush(stdin);
    printf("Enter your email : ");
    gets(R.email);
    fputs(R.email,admn);

    fflush(stdin);
    printf("Enter your PIN : ");
    gets(R.PIN);
    fputs(R.PIN,admn);


    printf("\n\n\n");
{
fclose(admn);


    {
        //User
        fgets(R.User,30,admn);
        puts(R.User);
    }
    {
        //Name Output
        fgets(R.Name,30,admn);
        puts(R.Name);
    }



    fflush(stdin);

    {   //Phone Number Output
        fgets(R.Phone,20,admn);
        a=strlen(R.Phone);
        if(R.Phone[0]=='+' && R.Phone[1]=='8' && R.Phone[2]=='8' && a==14)
        {
            printf("%s",R.Phone);
        }
        else
            if(R.Phone[0]=='0' && a==11)
        {
            printf("+88%s",R.Phone);
        }
        else
        {
            printf("\nInvalid Number\n");
        }
    }





    printf("\n");



    fflush(stdin);

    {
        //email output
        fgets(R.email,50,admn);
        b=strlen(R.email);
        for(i=0;R.email[i]!='\0';i++)
        {
            if(R.email[i]=='@')
            {
                c++;
                break;
            }
        }
        if(c==1 && R.email[b-4]=='.' && R.email[b-3]=='c' && R.email[b-2]=='o' && R.email[b-1]=='m' )
            {
                puts(R.email);
            }
        else
        {
            printf("\nInvalid Email\n");
        }
    }

    fflush(stdin);
    {
     //PIN output
     fgets(R.PIN,20,admn);
    for(int i=0;R.PIN[i]!='\0';i++)
    {
        if(R.PIN[i] >= 'A' && R.PIN[i] <= 'Z')
        {
            p++;
        }
        else
        if(R.PIN[i] >= 'a' && R.PIN[i] <= 'z')
        {
            q++;
        }

        m++;
    }
    if(m >= 8 && p > 0 && q > 0)
    {
        printf("Password Saved\n");
    }
    else
    {
        printf("Password saved but weak\n");
    }
    fflush(stdin);
    }
    fclose(admnr);
}
}
int Login()
{
    char u[30];
    char p[20];
    int f=0;
    int i,j,g=0,a=0,b=0,c=0,d=0,fst=0,pat=0,y=0;
    printf("Enter the user name : ");
    fflush(stdin);
    gets(u);
    a=strlen(u);
    b=strlen(R.User);
    for(i=0;u[i]!='\0';i++)
    {
        if(a==b && u[i]==R.User[i])
        {
           f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("Enter the Password : ");
            fflush(stdin);
            gets(p);
            c=strlen(p);
            d=strlen(R.PIN);
            for(j=0;p[j]!='\0';j++)
        {
                if(c==d && p[j]==R.PIN[j])
                {
                    g=1;
                }
                else
                {
                    g=0;
                    break;
                }
        }
    }
    if(f==1 && g==1)
    {
        pat=1;
        y=1;
        printf("Login Approved!\n");
        home();
        return 0;

    }
    else
    {
        printf("Login Credential is not matched!\n");
    }

}
int main()
{
   int opt=0;
    while(1)
    {
        printf("1.Register");
        printf("\n2.Login\n3.Exit\n");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
        system("cls");
        Reg();
        break;

        case 2:
        system("cls");
        Login();
        break;

        case 3:
        return 0;
        break;

        default:
        system("cls");
        printf("Invalid Input!\n");
        break;
        }
    }
return 0;
}
