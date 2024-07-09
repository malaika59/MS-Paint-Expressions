#include "data_header.h"


void square(int row, char symbol, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= row; j++)
            {
                if (i == 1 || i == row || j == 1 || j == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }
            }
            printf("\n");   fprintf(m,"\n");
        }
        fclose(m);
    }
    // for right

    if (position == 2)
    {
        
        for (int i = 1; i <= row; i++)
        {
           
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            
            for (int j = 1; j <= row; j++)
            {
                if (i == 1 || i == row || j == 1 || j == row)
                {
                   
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }
                else
                {
                   
                    changeTextColor(fillcolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }
            }
            
           
            printf("\n");   fprintf(m,"\n");
            
        }
        fclose(m);
    }
    //middle
    if (position == 3)
    {
        
        for (int i = 1; i <= row; i++)
        {
                        

            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = 1; j <= row; j++)
            {
                
                if (i == 1 || i == row || j == 1 || j == row)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }
                
            }
            printf("\n");   fprintf(m,"\n");
           
            
        }
        fclose(m);
    }
}

void hollow_square(int row, char symbol, int position, int outlinecolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= row; j++)
            {
                if (j == 1 || j == row || i == row || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }

                else
                {
                    printf(" ");  fprintf(m," ");
                }
            }
            printf("\n");   fprintf(m,"\n");
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

            for (int j = 1; j <= row; j++)
            {
                if (j == 1 || j == row || i == row || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }

                else
                {
                    printf(" ");  fprintf(m," ");
                }
            }
           
            printf("\n");   fprintf(m,"\n");
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

            for (int j = 1; j <= row; j++)
            {
                if (j == 1 || j == row || i == row || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);
                }

                else
                {
                    printf(" ");  fprintf(m," ");
                }
            }
            printf("\n");   fprintf(m,"\n");
            
        }
        fclose(m);
    }
}