#include "data_header.h"



void paralllogram(int size, char symbol, int position, int outlinecolor, int fillcolor)
{ FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    int m = size * 2 - 1;
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 || j == 1 || i == size || j == m)
                {
                    changeTextColor(outlinecolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
            }
            printf("\n");
             fprintf(mal,"\n");
        }
        fclose(mal);
    }
    // right
    if (position == 2)
    {
        

        for (int i = 1; i <= size; i++)
        {
              printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 || j == 1 || i == size || j == m)
                {
                    changeTextColor(outlinecolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
            }
           
            printf("\n");
             fprintf(mal,"\n");
        }
        fclose(mal);
    }
    // middle
    if (position == 3)
    {
        

        for (int i = 1; i <= size; i++)
        {
              printf("                                                                ");
           fprintf(mal,"                                                                ");

            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 || j == 1 || i == size || j == m)
                {
                    changeTextColor(outlinecolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
            }
            printf("\n");
             fprintf(mal,"\n");
            
        }
        fclose(mal);
    }
}

void hollow_paralllogram(int size, char symbol, int position, int outlinecolor)
{ FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    int m = size * 2 - 1;
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 || j == 1 || i == size || j == m)
                {
                    changeTextColor(outlinecolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
             fprintf(mal,"\n");
        }
        fclose(mal);
    }
    if (position == 2)
    {
        

        for (int i = 1; i <= size; i++)
        {
              printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 || j == 1 || i == size || j == m)
                {
                    changeTextColor(outlinecolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
                else
                {
                    printf(" ");
                }
            }
            
            printf("\n");
             fprintf(mal,"\n");
        }
        fclose(mal);
    }
    if (position == 3)
    {
       

        for (int i = 1; i <= size; i++)
        {
               printf("                                                                ");
           fprintf(mal,"                                                                ");

            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 || j == 1 || i == size || j == m)
                {
                    changeTextColor(outlinecolor);
                     printf("%c", symbol);
                    fprintf(mal,"%c",symbol);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
             fprintf(mal,"\n");
            
        }
        fclose(mal);
    }
}