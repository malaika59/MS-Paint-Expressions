#include "data_header.h"



void pyramid(char symbol, int row, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == row || j == 1 || j == i || i == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
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
       
        for (int i = 1; i <= row; i++)
        {
           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == row || j == 1 || j == i || i == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
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
       
        for (int i = 1; i <= row; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == row || j == 1 || j == i || i == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
         fclose(m);
    }
}

void hollow_pyramid(char symbol, int row, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int i = 1; i <= row; i++)
        {

            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= i; k++)
            {
                if (k == row || k == 1 || k == i || i == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
                else
                {
                    printf("  ");
                    fprintf(m, "  ");
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
       
        for (int i = 1; i <= row; i++)
        {
           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= i; k++)
            {
                if (k == row || k == 1 || k == i || i == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
                else
                {
                    printf("  ");
                    fprintf(m, "  ");
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
       
        for (int i = 1; i <= row; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int spc = 1; spc <= row - i; spc++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= i; k++)
            {
                if (k == row || k == 1 || k == i || i == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);
                    fprintf(m, "%c ", symbol);
                }
                else
                {
                    printf("  ");
                    fprintf(m, "  ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
         fclose(m);
    }
}

void invertpyramid(char symbol, int row, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {

                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
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
        
        for (int i = 1; i <= row; i++)
        {
           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {

                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
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
       
        for (int i = 1; i <= row; i++)
        {
           printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {

                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
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

void hollowinvertpyramid(char symbol, int row, int position, int outlinecolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {
                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
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
        
        for (int i = 1; i <= row; i++)
        {
           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {
                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
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
       
        for (int i = 1; i <= row; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 1; j <= row * 2 - (2 * i - 1); j++)
            {
                if (i == 1 || j == 1 || j == row * 2 - (2 * i - 1))
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