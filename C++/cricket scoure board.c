#include<stdio.h>
#include<stdlib.h>

struct bowler
{
    char name[25];
    int rungive,wkttkn,runextra;
    int max_w;
    float overs,econ;
} pl2[100],pl4;


int main()
{
    int plno,choice;
    int i,n,totalover;
    printf("\n======================Welcome======================\n\n");
    printf("Enter the number of Total Overs: \n ");
    scanf("%d",&totalover);

    printf("----Add the bowlers details-----\n");


    printf("Enter the number of bowlers: \n ");
    scanf("%d",&n);
//T-20match to apply in developing time.
   /* if(n > (totalover/4))
    {
    printf("Sorry Bowler have to maximum 4 Over");
    }
    else
    {*/

        for(i=0; i<n; i++)
        {

            printf("\nEnter name of bowler-%d: ",i+1);
            scanf("%s",pl2[i].name);


            printf("Enter the runs given by the bowler-%d:\n ",i+1);
            scanf("%d",&pl2[i].rungive);


            printf("Enter the overs bowled by the bowler-%d:\n ",i+1);
            scanf("%f",&pl2[i].overs);


            printf("Enter the wickets taken by the bowler-%d\n ",i+1);
            scanf("%d",&pl2[i].wkttkn);

           // printf("Enter the extra runs given by the bowler:%d:\n ",i+1);
           // scanf("%d",&pl2[i].runetxra);

        }

        printf("Thank you all details are recorded\n\n");
    //}

    do
    {

        printf(" 1)Batsman detail:\n 2)Bowlers detail:\n 3)Match summary:\n 4)Record:\n 5)Exit\n ");
        printf("\nEnter the choice:");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            printf("Enter the batsman number to see his details\n");
            printf("Sorry project in prograss");

            break;


        case 2:
            printf("Enter the bowlers number to see his details\n");
            scanf("%d",&plno);

            plno--;
            printf("                         Player Detail\n  ");
            printf("=================================================================\n");
            printf(" Bowler        overs           runs        wicket       economy\n");
            printf("=================================================================\n");



            pl2[plno].econ=pl2[plno].rungive/pl2[plno].overs;
            printf(" %-15s %-14.1f %-13d %-11d %-11.2f\n\n",pl2[plno].name,pl2[plno].overs,pl2[plno].rungive,pl2[plno].wkttkn,pl2[plno].econ);
            break;

        case 3:
            printf("      Sorry               Match summary is customize Oparetion\n");

            break;

        case 4:
            printf("Sorry project in prograss");

            break;



        case 5:
            exit(1);

        default:
            printf("Enter the correct choice\n");
            break;

        }

    }
    while(choice!=5);


    return 0;

}

