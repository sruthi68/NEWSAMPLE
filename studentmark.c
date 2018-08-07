#include<stdio.h>
#include<hellomake.h>

struct student

 {
 
   int roll;
   float mark1;
   float mark2;
   float mark3;
   float total;
   float average;

  }s[4];


void studentmark()

 {

    int i;
    printf("Entering 3 Marks For Each Students\n");

      for(i=0;i<4;i++)

       {
 
         s[i].roll = i+1;

         printf("\nFor Rollno %d\n",s[i].roll);

         printf("Enter Mark1: ");
         scanf("%f",&s[i].mark1);

         printf("Enter Marks2: ");
         scanf("%f",&s[i].mark2);

         printf("Enter Mark3: ");
         scanf("%f",&s[i].mark3);

         s[i].total=s[i].mark1+s[i].mark2+s[i].mark3;
         s[i].average = s[i].total/3;

         printf("\n");

        }

  printf("Displaying Total Marks And Average For Each Student\n\n");

      for(i=0;i<4;i++)

       {
   
          printf("Rollno: %d\n",i+1);
          printf("Mark1: %.1f \n",s[i].mark1);
          printf("Marks2: %.1f \n",s[i].mark2);
          printf("Marks3: %.1f \n",s[i].mark3);
          printf("Total Marks: %.1f\n",s[i].total);
          printf("Average Marks: %.1f\n",s[i].average);


          printf("\n");

        }

    

  }
          
