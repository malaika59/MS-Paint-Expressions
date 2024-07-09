#include "data_header.h"

void hollowkite(int size, int outlinecolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = 0; row < size; row++)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = 1; row <= size - 2; row++)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int row = 0; row < size; row++)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = 1; row <= size - 2; row++)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {
       
        for (int row = 0; row < size; row++)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
          
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = 1; row <= size - 2; row++)
        {

            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}
void kite(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = 0; row < size; row++)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = 1; row <= size - 2; row++)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {
       

        for (int row = 0; row < size; row++)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = 1; row <= size - 2; row++)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int row = 0; row < size; row++)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = 1; row <= size - 2; row++)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}

void invertedkite(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = size - 2; row >= 1; row--)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        for (int row = 0; row < size; row++)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {
       
        for (int row = size - 2; row >= 1; row--)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }

        for (int row = 0; row < size; row++)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
          
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int row = size - 2; row >= 1; row--)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }

        for (int row = 0; row < size; row++)
        {

            printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}
void invertedhollowkite(int size, int outlinecolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = size - 2; row >= 1; row--)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        for (int row = 0; row < size; row++)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {
        

        for (int row = size - 2; row >= 1; row--)
        {

            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            

            printf("\n");
            fprintf(m, "\n");
        }

        for (int row = 0; row < size; row++)
        {

            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        

        for (int row = size - 2; row >= 1; row--)
        {

           printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == size - 2)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            

            printf("\n");
            fprintf(m, "\n");
        }

        for (int row = 0; row < size; row++)
        {

            printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
           
            printf("\n");
            fprintf(m, "\n");
        }
        for (int row = size; row > 0; row--)
        {

            printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m, "   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, " %c ", symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            
            printf("\n");
            fprintf(m, "\n");
        }
        fclose(m);
    }
}