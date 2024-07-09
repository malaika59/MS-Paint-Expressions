#include "data_header.h"

void simple_tripozium(int size, char symbol, int position, int outlinecolor, int fillcolor)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    // left
    if (position == 1)
    {

        for (int i = 1; i <= size; i++)
        {

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // right
    if (position == 2)
    {

        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // middle
    if (position == 3)
    {

        for (int i = 1; i <= size; i++)
        {
printf("                                                                ");
          fprintf(m,"                                                                ");
            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}

void hollow_tripozium(int size, char symbol, int position, int outlinecolor)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    // left
    if (position == 1)
    {

        for (int i = 1; i <= size; i++)
        {

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i) // triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= size; j++) // squre
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i) // lower triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // right
    if (position == 2)
    {
        

        for (int i = 1; i <= size; i++)
        {
            
printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i) // triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= size; j++) // squre
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i) // lower triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // middle
    if (position == 3)
    {
       
        

        for (int i = 1; i <= size; i++)
        {
           printf("                                                                ");
          fprintf(m,"                                                                ");

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i) // triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= size; j++) // squre
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i) // lower triangle
                {

                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}

void invert_tripozium(int size, char symbol, int position, int outlinecolor, int fillcolor)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = size; i >= 1; i--)
        {

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // right
    if (position == 2)
    {
        

        for (int i = size; i >= 1; i--)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // middle
    if (position == 3)
    {
        

        for (int i = size; i >= 1; i--)
        {
            printf("                                                                ");
          fprintf(m,"                                                                ");
            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}

void hollow_invert_tripozium(int size, char symbol, int position, int outlinecolor)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = size; i >= 1; i++)
        {

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i) // triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= size; j++) // squre
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i) // lower triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // right
    if (position == 2)
    {
       
        for (int i = size; i >= 1; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i) // triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= size; j++) // squre
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i) // lower triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    // middle
    if (position == 3)
    {
       
        for (int i = size; i >= 1; i++)
        {
           printf("                                                                ");
          fprintf(m,"                                                                ");
            for (int j = i; j <= size; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j < i; j++)
            {
                if (j == 1 || i == size || j == i) // triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= size; j++) // squre
            {
                if (i == 1 || i == size)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            for (int j = 1; j <= i; j++)
            {
                if (i == 1 || i == size || j == i) // lower triangle
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
          
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}