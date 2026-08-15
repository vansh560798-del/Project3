#include <stdio.h>

int main()
{
    int i, j;

    printf("Q1\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("4%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    printf("Q2\n");
    int num = 11;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    printf("\n");

    printf("Q3\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    printf("Q4\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }

    printf("\n");

    printf("Q5\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (j = 2; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    printf("Q6\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    printf("Q7 - P\n");
  for (i = 1; i <= 5; i++)
  {
      for (j = 1; j <= 5; j++)
      {
          if (i == 1 || i == 3 || j == 1 || (j == 5 && i == 2))
              printf("* ");
          else
              printf("  ");
      }
      printf("\n");
  }
}