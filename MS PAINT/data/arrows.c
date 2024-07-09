#include "data_header.h"

   
   void rightarrow(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");



    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
           printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
            for (int j = 0; j <= i; j++)
            {
                if ((j == 0) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");
            fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m," ");
            }

            for (int j = size; j >= i; j--)
            {
                if ((j == size) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            
            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[left]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {

            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
            for (int j = 0; j <= i; j++)
            {
                if ((j == 0) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }

            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {

            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");
                fprintf(m," ");
            }

            for (int j = size; j >= i; j--)
            {
                if ((j == size) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }

            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[right]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = 0; j <= i; j++)
            {
                if ((j == 0) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");fprintf(m," ");
            }

            for (int j = size; j >= i; j--)
            {
                if ((j == size) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
}
void rightarrowhollow(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= size; j++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }

            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");fprintf(m," ");
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i + j == size + 1))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[middle]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
             printf("                                                                ");
            fprintf(m,"                                                                ");
            for (int j = 0; j <= size; j++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }

            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                 ");
            fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");fprintf(m," ");
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i + j == size + 1))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[right]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 0; j <= size; j++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {

                printf(" ");fprintf(m," ");
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i + j == size + 1))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
}
void leftarrowhollow(int size, int outlinecolorChoice, char symbol, int position)

{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == 0) || (k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[middle]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == 0) || (k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[right]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == 0) || (k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {

           printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
}
void leftarrow(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == 0) || (k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[middle]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == 0) || (k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[right]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == 0) || (k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
           printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((k == size) || (i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
}

void uparrow(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {
            for (int l = size - 1; l >= i; l--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {

                if (i == size || k == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = 0; j <= i; j++)
            {

                if (i == size || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }

            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[middle]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int l = size - 1; l >= i; l--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {

                if (i == size || k == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = 0; j <= i; j++)
            {

                if (i == size || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{[right]}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int l = size - 1; l >= i; l--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {

                if (i == size || k == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = 0; j <= i; j++)
            {

                if (i == size || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
}
void uparrowhollow(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size) || (k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((i == size) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }

            printf("\n");fprintf(m,"\n");
        }

        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size) || (k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((i == size) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            
            printf("\n");fprintf(m,"\n");
        }

        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((i == size) || (k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((i == size) || (j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }

        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((i == k)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
}
void downarrow(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (i == 0 || k == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }

                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = size; j >= i; j--)
            {
                if (i == 0 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        

        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)

        {
           printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (i == 0 || k == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }

                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = size; j >= i; j--)
            {
                if (i == 0 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{[left]}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {

            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        for (int i = 0; i <= size; i++)
        {

            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (i == 0 || k == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }

                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            for (int j = size; j >= i; j--)
            {
                if (i == 0 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
}
void downarrowhollow(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");

    if (position == 1)
    {

        for (int i = 0; i <= size; i++)
        {
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" ");
                    fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }

        for (int i = 0; i <= size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((i == 0) || (k == size)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }

            for (int j = 0; j <= size; j++)
            {
                if ((i == 0) || (i + j == size + 1))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {
        
        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }

        for (int i = 0; i <= size; i++)
        {
            printf("                                                                ");
             fprintf(m,"                                                                ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((i == 0) || (k == size)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }

            for (int j = 0; j <= size; j++)
            {
                if ((i == 0) || (i + j == size + 1))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

    if (position == 3)
    {
        
        for (int i = 0; i <= size; i++)
        {
            
        printf("                                                                                                                    ");
         fprintf(m,"                                                                                                                    ");
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = 0; k <= i; k++)
            {
                if ((k == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }

        for (int i = 0; i <= size; i++)
        {
            printf("                                                                                                                    ");
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int k = size; k >= i; k--)
            {
                if (((i == 0) || (k == size)))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");fprintf(m," ");
                }
            }

            for (int j = 0; j <= size; j++)
            {
                if ((i == 0) || (i + j == size + 1))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);fprintf(m,"%c",symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m," ");
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
         fclose(m);
    }
  
}