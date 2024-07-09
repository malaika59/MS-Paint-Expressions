#include "data_header.h"

void hexagon(int size, char symbol, int position, int outlinecolor, int fillcolor)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i < size; i++)
        {
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
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
        for (int i = size; i >= 2; i--)
        {
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
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
        
        
        for (int i = 2; i < size; i++)
        {
             printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 0; j < size - i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                        printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }
            printf("\n");
             fprintf(m,"\n");
        }
        for (int i = size; i >= 2; i--)
        {
             printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                   changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   changeTextColor(fillcolor);
                        printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }
           printf("\n");
             fprintf(m,"\n");
        }
        fclose(m);
    }
    if (position == 3)
    {
        
        for (int i = 2; i < size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = 0; j < size - i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                        printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }
            printf("\n");
             fprintf(m,"\n");
        }
        for (int i = size; i >= 2; i--)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                   changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   changeTextColor(fillcolor);
                        printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }
           printf("\n");
             fprintf(m,"\n");
        }
        fclose(m);
    }
}

    void hollow_hexagon(int size, char symbol, int position, int outlinecolor)
    {
        FILE *m;
        m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

        if (position == 1)
        {
            for (int i = 2; i < size; i++)
        {
            for (int j = 0; j < size - i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
            printf("\n");
             fprintf(m,"\n");
        }
        for (int i = size; i >= 2; i--)
        {
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                   changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
           printf("\n");
             fprintf(m,"\n");
        }
        }
        if (position == 2)
        {
            for (int i = 2; i < size; i++)
        {
             printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 0; j < size - i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
            printf("\n");
             fprintf(m,"\n");
        }
        for (int i = size; i >= 2; i--)
        {
             printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                   changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
           printf("\n");
             fprintf(m,"\n");
        }
        fclose(m);
        }
        if (position==3)
        {
            for (int i = 2; i < size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = 0; j < size - i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
            printf("\n");
             fprintf(m,"\n");
        }
        for (int i = size; i >= 2; i--)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                    fprintf(m," ");
            }
            for (int s = 0; s < i * 2 - 1; s++)
            {
                if (s == 0 || s == (i * 2 - 1) - 1 || i == 2)
                {
                   changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
           printf("\n");
             fprintf(m,"\n");
        }
            fclose(m);
        }
        
    }