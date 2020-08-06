#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char pass1[50];
    char pass2[50];
    char pass3[50];
    char Question[10000];

    int x,i;


    FILE *fr,*fw;

   printf("\t\t\t\t\t\tWelcome\n\n\n\t");


   printf("\n\n\nGive your Password: ");
   gets(pass1);


   printf("\nEnter your Question: \n\t");
   gets(Question);


   printf("\n\nwhat do you want?\n\n\t");
   printf("\n\n1.Encrypt\n\t");
   printf("\n\n2.Decrypt\n\t");
   printf("\n\nEnter you choice: ");
   scanf("%d",&x);

    switch(x)
    {
    case 1:

        printf("\n\n\nGive your Password: ");
        scanf("%s",&pass2);

        printf("\t\t\t\t\t\tWelcome User\n\n\n");


        if(strcmp(pass1,pass2)==0)
        {
             for(i=0;Question[i]!='\0';i++)
        {
            Question[i]=Question[i]+3;
        }
       Question[i]='\0';
        printf("\n\n The Question is successfully Encrypted\n\n\t");

    fw=fopen("input.txt","w");
    fprintf(fw,"%s",&Question);
    fclose(fw);
    break;
        }


         else
    {
        printf("Try Aganin\n\n");
        break;
    }


    case 2:

    printf("\n\n\nGive your Password: ");
    scanf("%s",&pass3);

    printf("\t\t\t\t\t\tWelcome User\n\n\n");

    if(strcmp(pass1,pass3)==0)
     {
        for(i=0;Question[i]!='\0';i++)
        {
            Question[i]=Question[i]-3;
        }
        printf("\n\n The Question is successfully Decrypted\n\n\t");

       fr=fopen("output.txt","w");
    fprintf(fr,"%s",&Question);
    fclose(fr);
        break;
    }

    else
    {
        printf("Try Aganin\n\n");
        break;
    }

     default:
            printf("Error!");

     }








    return 0;
}
