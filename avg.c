/*Suppose, there are 3 tests Bangla,English and math. Take the scores of each test as Input from user.
Calculate the Average number of 3 score.
Task-1. Print the average number.
Task-2. Calculate the grade on the basis of the Avg. Number.
Show the grade of the student using following Chart.
A -> 80 to 100
B -> 60 to 79
C -> 50 to 59
F -> below 50
[hint: Use floating point number.]
solved by সাইফুল ইসলাম*/

#include<stdio.h>
void main()
{
    float Bangla, English, Math, AM;           /*AM=Average Marks*/
    printf("\nEnter marks obtain in Bangla\t");
    scanf("%f",&Bangla);
    printf("\nEnter marks obtain in English\t");
    scanf("%f",&English);
    printf("\nEnter marks obtain in Math\t");
    scanf("%f",&Math);
    AM = (Bangla + English + Math)/3;
    printf("\nThe Average Marks = \t%f\n",AM);

    if((AM<=100)&&(AM>=80))
    {
        printf("\nThe grade obtained by the student is 'A'\t%f\n\n");
    }
        else if((AM<=79)&&(AM>=60))
        {
            printf("\nThe grade obtained by the student is 'B'\t\n\n");
        }
            else if((AM<=59)&&(AM>=50))
            {
                printf("\nThe grade obtained by the student is 'C'\t\n\n");
            }
        else if((AM<50)&&(AM>0))
        {
            printf("\nThe grade obtained by the student is 'F'\t\n\n");
        }

   else
   {
       printf("\n***** Invalid Marks Input *****\t\n\n");
   }

}
