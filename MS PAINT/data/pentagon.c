#include "data_header.h"



void pentagon(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = 0; row < size; row++)
        {
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
            }
            printf("\n");
             fprintf(mal,"\n");
        }
        for (int row = size; row >= 3; row--)
        {
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
            }
            printf("\n");
             fprintf(mal,"\n");
        }
         fclose(mal);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[middle]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int row = 0; row < size; row++)
        {
            
            printf("                                                                ");
           fprintf(mal,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
            }
            printf("\n");
             fprintf(mal,"\n");
            

        }
        for (int row = size; row >= 3; row--)
        {
            printf("                                                                ");
           fprintf(mal,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
            }
            printf("\n");
             fprintf(mal,"\n");
            
        }
         fclose(mal);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {


        for (int row = 0; row < size; row++)
        {
            printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
            }
            
            printf("\n");
             fprintf(mal,"\n");
        }
        for (int row = size; row >= 3; row--)
        {
            printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
            }
            
            printf("\n");
             fprintf(mal,"\n");
        }
         fclose(mal);
    }
}
void hollowpentagon(int size, int outlinecolorChoice, char symbol, int position)
{FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = 0; row < size; row++)
        {
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
            }
            printf("\n");
             fprintf(mal,"\n");
        }
        for (int row = size; row >= 3; row--)
        {
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
            }
            printf("\n");
             fprintf(mal,"\n");
        }
         fclose(mal);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
       

        for (int row = 0; row < size; row++)
        {
            printf("                                                                ");
           fprintf(mal,"                                                                ");
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
            }
            printf("\n");
             fprintf(mal,"\n");
           
        }
        for (int row = size; row >= 3; row--)
        {
              printf("                                                                ");
           fprintf(mal,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
            }
            printf("\n");
             fprintf(mal,"\n");
           
        }
         fclose(mal);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {


        for (int row = 0; row < size; row++)
        {
              printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
            }
            
            printf("\n");
             fprintf(mal,"\n");
        }
        for (int row = size; row >= 3; row--)
        {
              printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(mal,"   ");
            }
            for (int m = 0; m < row * 2 - 1; m++)
            {
                if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(mal," %c ",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
            }
            
            printf("\n");
             fprintf(mal,"\n");
        }
         fclose(mal);
    }
}
    void invertedpentagon(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
    {FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

        if (position == 1)
        {

            for (int row = 3; row <= size; row++)
            {
                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        changeTextColor(fillcolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
            }
            for (int row = size; row >= 0; row--)
            {
                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        changeTextColor(fillcolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
            }
             fclose(mal);
        }

        //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
        if (position == 3)
        {

            for (int row = 3; row <= size; row++)
            {
            printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");
                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        changeTextColor(fillcolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                }
                
                printf("\n");
                 fprintf(mal,"\n");
            }
            for (int row = size; row >= 0; row--)
            {
                printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");
                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        changeTextColor(fillcolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                }
              
                printf("\n");
                 fprintf(mal,"\n");
            }
             fclose(mal);
        }
        //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
        if (position == 2)
        {


            for (int row = 3; row <= size; row++)
            {
                  printf("                                                                ");
           fprintf(mal,"                                                                ");


                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        changeTextColor(fillcolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
               
            }
            for (int row = size; row >= 0; row--)
            {
                  printf("                                                                ");
           fprintf(mal,"                                                                ");

                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        changeTextColor(fillcolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
                
            }
             fclose(mal);
        }
    }
    void hollowinvertedpentagon(int size, int outlinecolorChoice, char symbol, int position)
    {FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

        if (position == 1)
        {

            for (int row = 3; row <= size; row++)
            {
                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        printf("   ");
                        fprintf(mal,"   ");
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
            }
            for (int row = size; row >= 0; row--)
            {
                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        printf("   ");
                        fprintf(mal,"   ");
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
            }
             fclose(mal);
        }
        //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[middle]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
        if (position == 2)
        {
            
            for (int row = 3; row <= size; row++)
            {
                  printf("                                                                ");
           fprintf(mal,"                                                                ");


                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        printf("   ");
                        fprintf(mal,"   ");
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
               
            }
            for (int row = size; row >= 0; row--)
            {
                 printf("                                                                ");
           fprintf(mal,"                                                                ");

                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        printf("   ");
                        fprintf(mal,"   ");
                    }
                }
                printf("\n");
                 fprintf(mal,"\n");
                
            }
             fclose(mal);
        }
        //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
        if (position == 3)
        {


            for (int row = 3; row <= size; row++)
            {
                   printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1 || row == 3)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        printf("   ");
                        fprintf(mal,"   ");
                    }
                }
                
                printf("\n");
                 fprintf(mal,"\n");
            }
            for (int row = size; row >= 0; row--)
            {
                   printf("                                                                                                                    ");
            fprintf(mal,"                                                                                                                    ");

                for (int space = 0; space < size - row; space++)
                {
                    printf("   ");
                    fprintf(mal,"   ");
                }
                for (int m = 0; m < row * 2 - 1; m++)
                {
                    if (m == 0 || m == (row * 2 - 1) - 1)
                    {
                        changeTextColor(outlinecolorChoice);
                        printf(" %c ", symbol);
                        fprintf(mal," %c ",symbol);
                    }
                    else
                    {
                        printf("   ");
                        fprintf(mal,"   ");
                    }
                }
               
                printf("\n");
                 fprintf(mal,"\n");
            }
            fclose(mal);
        }
    }