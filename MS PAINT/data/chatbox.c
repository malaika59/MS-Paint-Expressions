#include "data_header.h"

   

void hollowchatbox(int size, int outlinecolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {



        for (int row = 2; row <= size; row++)
        {
            

            for (int k = 0; k < size * 2 - 1; k++)
            {
                if (k == 0 || k == (size * 2 - 1) - 1 || row == 2 || row == size)
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
        // spaces
        for (int i = 0; i <= size; i++)
        {
            

            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            // printing edge of box
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

       

        for (int row = 2; row <= size; row++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");


            for (int k = 0; k < size * 2 - 1; k++)
            {
                if (k == 0 || k == (size * 2 - 1) - 1 || row == 2 || row == size)
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
        // spaces
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");


            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            // printing edge of box
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {
        

        for (int row = 2; row <= size; row++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");


            for (int k = 0; k < size * 2 - 1; k++)
            {
                if (k == 0 || k == (size * 2 - 1) - 1 || row == 2 || row == size)
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
        // spaces
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");


            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m, " ");
            }
            // printing edge of box
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
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
void chatbox(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int row = 2; row <= size; row++)
        {

            for (int k = 0; k < size * 2 - 1; k++)
            {
                if (k == 0 || k == (size * 2 - 1) - 1 || row == 2 || row == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf(" %c ", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        
        
    }
    for (int i = 0; i <= size; i++)
    {

        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        // printing edge of box
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {
            if (((i == 0) || (k == size) || (i == k)))
            {
                changeTextColor(outlinecolorChoice);
                printf("%c", symbol);
                fprintf(m, "%c", symbol);
            }
            else
            {
                changeTextColor(fillcolorChoice);
                printf("%c", symbol);
                fprintf(m, "%c", symbol);
            }
        }

        printf("\n");
        fprintf(m, "\n");
    }
    fclose(m);
}

//{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
if (position == 2)
{
    

    for (int row = 2; row <= size; row++)
    {

        printf("                                                                ");
        fprintf(m,"                                                                ");


        for (int k = 0; k < size * 2 - 1; k++)
        {
            if (k == 0 || k == (size * 2 - 1) - 1 || row == 2 || row == size)
            {
                changeTextColor(outlinecolorChoice);
                printf(" %c ", symbol);
                fprintf(m, "%c", symbol);
            }
            else
            {
                changeTextColor(fillcolorChoice);
                printf(" %c ", symbol);
                fprintf(m, "%c", symbol);
            }
        }
       
        printf("\n");
        fprintf(m, "\n");
    }

    for (int i = 0; i <= size; i++)
    {

        printf("                                                                ");
        fprintf(m,"                                                                ");


        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        // printing edge of box
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {
            if (((i == 0) || (k == size) || (i == k)))
            {
                changeTextColor(outlinecolorChoice);
                printf("%c", symbol);
                fprintf(m, "%c", symbol);
            }
            else
            {
                changeTextColor(fillcolorChoice);
                printf("%c", symbol);
                fprintf(m, "%c", symbol);
            }
        }
        
        printf("\n");
        fprintf(m, "\n");
        
    }
    fclose(m);
}

//{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

if (position == 3)
{

    

    for (int row = 2; row <= size; row++)
    {

       printf("                                                                                                                    ");
       fprintf(m,"                                                                                                                    ");


        for (int k = 0; k < size * 2 - 1; k++)
        {
            if (k == 0 || k == (size * 2 - 1) - 1 || row == 2 || row == size)
            {
                changeTextColor(outlinecolorChoice);
                printf(" %c ", symbol);
                fprintf(m, "%c", symbol);
            }
            else
            {
                changeTextColor(fillcolorChoice);
                printf(" %c ", symbol);
                fprintf(m, "%c", symbol);
            }
        }
        
        printf("\n");
        fprintf(m, "\n");
    }

    for (int i = 0; i <= size; i++)
    {

        printf("                                                                                                                    ");

        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {

            printf(" ");
            fprintf(m, " ");
        }
        // printing edge of box
        for (int j = 0; j <= i - 1; j++)
        {
            printf(" ");
            fprintf(m, " ");
        }
        for (int k = size; k >= i; k--)
        {
            if (((i == 0) || (k == size) || (i == k)))
            {
                changeTextColor(outlinecolorChoice);
                printf("%c", symbol);
                fprintf(m, "%c", symbol);
            }
            else
            {
                changeTextColor(fillcolorChoice);
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