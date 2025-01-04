#include <stdio.h>
int main()
{
    int rows;
    do
    {
       printf("Height:");
       scanf("%i",&rows);
    }
    while(rows<1);
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
          printf(" ");
          
        }
        for(int k=0;k<=i;k++)
        {
            printf("#");
        }
        printf("\n");
    }
}