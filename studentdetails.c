#include<stdio.h>
#include<hellomake.h>

struct student

 {
 
   char name[10];
   int roll;

  }s[4];


int main()
 {

   int i;
   printf("Enter The Information Of Students\n");

     for(i=0;i<4;i++)
      
      {

        s[i].roll = i+1;

        printf("\nFor Rollno %d\n",s[i].roll);

        printf("Enter Name: ");
        scanf("%s",s[i].name);

        printf("\n");

       }

  studentmark();

    return 0;

  }
