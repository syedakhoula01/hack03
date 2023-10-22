#include<stdio.h>

int main()
{
    float GB_in_plan , GB_used;
    int day;

    printf("Enter the number of GB in plan of 30 days timeperiod");
    scanf("%f", &GB_in_plan);

    printf("enter the current day 1-30");
    scanf("%d",&day);

    printf("enter the total numbers ogf GB used ");
    scanf("%f", &GB_used);

    float avg_use= GB_used / day;


int remaining_days = 30-day;
float remaining_data = GB_in_plan - GB_used;
float avg_daily_allowing = remaining_data / remaining_days;


char *status;
if(avg_use > GB_in_plan/30)
{
    status = "over use";
}
else if(avg_use< GB_in_plan/30);
{
    status = "under use";
}

else
{
    status= "on use";

}

printf("average daily usage : %.2f GB \n", avg_use);
printf("remaining data allowance : %2f GB \n" , remaining_data);
printf("average daily allowing for the rest of the time period: %.2f GB \n" , avg_daily_allowing);
printf("you are %s your data plan uasge \n", status);

if (remaining_data<=0)
{
    printf("you have run out of data this month.\n");
}
return 0;


}