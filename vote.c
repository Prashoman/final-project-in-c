#include <stdio.h>
int main()
{
    printf("\n\n");
    printf("\t\t\t\t\t    ######################################\n");
    printf("\t\t\t\t\t    ##\t\t\t\t        ##\n");
    printf("\t\t\t\t\t    ##             Welcome              ##\n");
    printf("\t\t\t\t\t    ##\t\t\t\t        ##\n");
    printf("\t\t\t\t\t    ##          To our Online           ##\n");
    printf("\t\t\t\t\t    ##\t\t\t\t        ##\n");
    printf("\t\t\t\t\t    ##    Electronics Voteing Machine   ##\n");
    printf("\t\t\t\t\t    ##\t\t\t\t        ##\n");
    printf("\t\t\t\t\t    ######################################\n\n\n");


    int Asif = 0, Rabbi = 0,Sumon=0, no_result = 0, total_vote, i, choice;
    printf("\t\t\t\t\t##############################################\n");
    printf("\t\t\t\t\t##\t\t\t\t            ##\n");
    printf("\t\t\t\t\t##    *How many vote want to count?*  ##\n");
    printf("\t\t\t\t\t##\t\t\t\t            ##\n");
    printf("\t\t\t\t\t##############################################\n\n");
    scanf("%d", &total_vote);

    for (i = 1; i <= total_vote; i++)
    {
        printf("\t\t\t\t\t#############################################\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t##  *Welcome to the voting system*   ##\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t#############################################\n");
        printf("\t\t\t\t\t        **Enter 1 to vote for Asif**\n");
        printf("\t\t\t\t\t        **Enter 2 to vote for Rabbi**\n");
        printf("\t\t\t\t\t        **Enter 3 to vote for Sumon**\n");
        printf("\t\t\t\t\t        **Enter 4 to vote for none**\n\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            Asif++;
        }
        else if (choice == 2)
        {
            Rabbi++;
        }
        else if(choice == 3)
        {
            Sumon++;
        }
        else if (choice == 4)
        {
            no_result++;
        }
        else
        {
            printf("\t\t\t\t\t**Invalid vote**\n");
        }
    }

    printf("\t\t\t\t\t#############################################\n");
    printf("\t\t\t\t\t##\t\t\t\t           ##\n");
    printf("\t\t\t\t\t##         **Result of the vote**        ##\n");
    printf("\t\t\t\t\t##\t\t\t\t           ##\n");
    printf("\t\t\t\t\t#############################################\n");
    printf("\t\t\t\t\t           **Asif got %d vote**\n", Asif);
    printf("\t\t\t\t\t           **Rabbi got %d vote**\n",Rabbi);
    printf("\t\t\t\t\t           **Sumon got %d vote**\n", Sumon);
    printf("\t\t\t\t\t          **Neutral got %d vote**\n\n\n", no_result);
    printf("\t\t\t\t\t          *********\n");
    printf("\t\t\t\t\t          *     ---Winner---      *\n");
    printf("\t\t\t\t\t          *********\n");

    if (Asif > Rabbi && Asif > Sumon && Asif > no_result)
    {
        printf("\t\t\t\t\t#############################################\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t##        **Asif win the vote**          ##\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t#############################################\n");
    }
    else if (Rabbi > Asif && Rabbi > Sumon && Rabbi > no_result)
    {
        printf("\t\t\t\t\t#############################################\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t##         **Rabbi win the vote**        ##\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t#############################################\n");
    }
    else if(Sumon > Asif && Sumon > Rabbi && Sumon > no_result)
    {
        printf("\t\t\t\t\t#############################################\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t##        **Sumon win the vote**         ##\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t#############################################\n");
    }
    else if (no_result > Asif && no_result > Rabbi && no_result > Sumon)
    {
        printf("\t\t\t\t\t################################################\n");
        printf("\t\t\t\t\t##\t\t\t\t              ##\n");
        printf("\t\t\t\t\t##  **Neutral vote got the majority vote**  ##\n");
        printf("\t\t\t\t\t##\t\t\t\t              ##\n");
        printf("\t\t\t\t\t################################################\n");
    }
    else
    {
        printf("\t\t\t\t\t#############################################\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t##      **The vote result is tied**      ##\n");
        printf("\t\t\t\t\t##\t\t\t\t           ##\n");
        printf("\t\t\t\t\t#############################################\n");
    }

    return 0;
}