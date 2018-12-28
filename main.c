#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct patientinfo{
char name[20];
char age[5];
char cause[20];
char phno[15];
char code[25][25];
char price[15];
char discount[15];
char total[10];
int num_med;
}info;
int main()
{
    int ch;
    printf("\t\tMENU\n\n\n");
    printf("1)Add patient details\n");
    printf("\n2)Search patient details\n");
    printf("\n3)Search for a medicine\n\n");
    printf("\n\t\t   Enter your choice   :   ");
    scanf("%d",&ch);
    switch(ch){

    case 1:add_patient_details();
    break;
    case 2://search_patient_details();
    break;
    case 3://search_medicines();
    break;



    }
    return 0;
}

void add_patient_details()
{
    system("cls");
    int i=0,n=0;
    char code[3][3];
    printf("\n\t\t\tFORM\n\n\n");
    printf("\t     Name      :      ");
    //scanf(" %s",info.name);
    fflush(stdin);
    gets(info.name);
    printf("\n\t   Age  :  ");
    //scanf(" %s",info.age);
    fflush(stdin);
    gets(info.age);
    printf("\n\t  phone number :  ");
    //scanf(" %s",info.phno);
    fflush(stdin);
    gets(info.phno);
    printf("Enter the cause he came for : ");
    //scanf(" %s",info.cause);
    fflush(stdin);
    gets(info.cause);
    printf("\nNumber of medicines taken  :  ");
    scanf("%d",&info.num_med);
    printf("Enter the medicine codes  :");
    while(i<info.num_med){
        printf("%d) ",i+1);
        scanf(" %s",info.code[i]);
i++;
    }

    printf("\t\t  Press any key to continue : ");
    getch();
    system("cls");
    display();


}

void display(){

int lenght[10],big;
lenght[0]=strlen(info.name);
lenght[1]=strlen(info.age);
lenght[2]=strlen(info.phno);
lenght[3]=strlen(info.cause);
big=lenght[0];
int i=1;
while(i<4){
    if(big<lenght[i]){
        big=lenght[i];
    }
    i++;
}
i=0;
big=big+4;
int temp1=0,temp2=0;
temp1=big+17;
temp2=temp1;
printf("\n\n\t\t   ");
while(temp2!=0){
    printf("-");
    temp2--;
}
printf("--\n\t\t   |");
temp2=temp1;
while(temp2!=0){
    printf(" ");
    temp2--;
}
printf("|\n\t\t   |");
temp2=temp1-15;
temp2=temp2/2;

//temp2=temp2/2;
while(temp2!=0){
    printf(" ");
    temp2--;
}
printf("PATIENT DETAILS");
temp2=temp1-15;
temp2=temp2/2;
//temp2=temp2/2;
while(temp2!=0){
    printf(" ");
    temp2--;
}
if(big%2==0){
printf("|\n\t\t   |");}
else{
   printf(" |\n\t\t   |");
}//printf(" |\n|");
temp2=temp1;
while(temp2!=0){
    printf(" ");
      temp2--;
        }
      printf("|\n\t\t   ");
      temp2=temp1;
        while(temp2!=0){
           printf("-");
           temp2--;
         }
       printf("--\n\t\t   ");
 printf("|");
 temp2=19;
 i=0;
 int even=0,odd=0;
 char sentence[5][20]={"NAME","AGE","PHONE NUMBER","DISEASES"};
 char infopa[6][20];
 strcpy(infopa[0],info.name);
 strcpy(infopa[1],info.age);
 strcpy(infopa[2],info.phno);
 strcpy(infopa[3],info.cause);
 for(i=0;i<4;i++){
    if((strlen(infopa[i]))%2==0){
        even++;
    }
    else{
        odd++;
    }
 }
 i=0;
 while(i<4)
 {

   temp2=17-strlen(sentence[i]);
   temp2=temp2/2;
   if((strlen(sentence[i]))/3==1){
    temp2=temp2-1;
   }
   while(temp2!=0){
    printf(" ");
    temp2--;
   }

   printf("%s",sentence[i]);
   temp2=17-strlen(sentence[i]);
   temp2=temp2/2;
   while(temp2!=0){
    printf(" ");
    temp2--;
   }
   if(i==0){
    printf(" |");
   }
   else{
   printf("|");}
   temp2=big-strlen(infopa[i]);
   temp2=temp2/2;

   if(even==4||odd==4){
    goto x;
   }
   else{


   if((strlen(infopa[i]))%2!=0){
    temp2=temp2+1;
   }
   }
   x:
   while(temp2!=0){
    printf(" ");
    temp2--;
   }
   printf("%s",infopa[i]);
   temp2=big-strlen(infopa[i]);
   temp2=temp2/2;
   while(temp2!=0){
    printf(" ");
    temp2--;
   }
   printf("|\n\t\t   ");
   i++;
   temp2=temp1;

        while(temp2!=0){
           printf("-");
           temp2--;
         }
       printf("--\n\t\t   ");
 //printf("|");
 if(i<4){
    printf("|");
 }


 }


}

