#include<stdio.h>
struct job
{
    char ch;
    int deadline;
    int profit;
};
int main()
{
    int i,j;
    struct job temp,list[] = { { 'a', 2, 100 },
                            { 'b', 1, 19 },
                            { 'c', 2, 27 },
                            { 'd', 1, 25 },
                            { 'e', 3, 15 }
                        };
    for(i = 0; i < 5; i++)
    {
        for(j = i+1; j < 5; j++)
        {
            if(list[i].profit < list[j].profit)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    char slot[4] = {'x','x','x','x'};
    for(i = 0;i < 5;i++)
    {
        for(j = list[i].deadline; j > 0;j --)
        {
            if(slot[j] == 'x')
            {
                slot[j] = list[i].ch;
                break;
            }

        }
    }
    for(i = 1;i < 4;i++)
    {
        printf("%c\n",slot[i]);
    }

    return 0;
}
