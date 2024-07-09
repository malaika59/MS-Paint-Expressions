#include "data_header.h"

void triangle(int size, char symbol, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == i || i == size || j == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
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

            for (int j = 1; j <= i; j++)
            {
                if (j == i || i == size || j == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
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
            for (int j = 1; j <= i; j++)
            {
                if (j == i || i == size || j == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);// Print the symbol instead of changing the text color
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
            
        }
        fclose(m);
    }
}

void hollow_triangle(int size, char symbol, int position, int outlinecolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == i || i == size || j == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    printf("  ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
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
            for (int j = 1; j <= i; j++)
            {
                if (j == i || i == size || j == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);  fprintf(m,"%c",symbol);// Print the symbol instead of changing the text color
                }
                else
                {
                    printf("  ");fprintf(m," ");
                }
            }
            
            printf("\n");fprintf(m,"\n");
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

            for (int j = 1; j <= i; j++)
            {
                if (j == i || i == size || j == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    printf("  ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
           
        }
        fclose(m);
    }
}

void right_triangle(int size, char symbol, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = i; j <= size; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
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
                printf(" ");fprintf(m," ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
           
            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
    //middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int j = i; j <= size; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
           
        }
        fclose(m);
    }
}

void hollow_right_triangle(int size, char symbol, int position, int outlinecolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = i; j <= size; j++)
            {
                printf("  ");fprintf(m," ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == size || j == i)
                {

                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
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
    //right
    if (position == 2)
    {
       
        for (int i = 1; i <= size; i++)
        {
           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = i; j <= size; j++)
            {
                printf("  ");fprintf(m," ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == size || j == i)
                {

                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
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
    //middle
    if (position == 3)
    {
        

        for (int i = 1; i <= size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = i; j <= size; j++)
            {
                printf("  ");fprintf(m," ");
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
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

void invert_triangle(int size, char symbol, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = i; j <= size; j++)
            {
                if (j == i || j == size || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);// Print the symbol instead of changing the text color
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
    //right
    if (position == 2)
    {
       

        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");

            for (int j = i; j <= size; j++)
            {
                if (j == i || j == size || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);  fprintf(m,"%c",symbol);// Print the symbol instead of changing the text color
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            
            printf("\n");fprintf(m,"\n");
             
        }
        fclose(m);
    }
    //middle
    if (position == 3)
    {
        

        for (int i = 1; i <= size; i++)
        {
             printf("                                                                ");
           fprintf(m,"                                                                ");

            for (int j = i; j <= size; j++)
            {
                if (j == i || j == size || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
            
        }
        fclose(m);
    }
}

void hollow_invert_triangle(int size, char symbol, int position, int outlinecolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = i; j <= size; j++)
            {
                if (j == i || j == size || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol);  fprintf(m,"%c",symbol);// Print the symbol instead of changing the text color
                }
                else
                {
                    printf("  ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
    //right
    if (position == 2)
    {
       
        for (int i = 1; i <= size; i++)
        {
           printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = i; j <= size; j++)
            {
                if (j == i || j == size || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    printf("  ");fprintf(m," ");
                }
            }
            
            printf("\n");fprintf(m,"\n");
             
        }
        fclose(m);
    }
    //middle
    if (position == 3)
    {

        for (int i = 1; i <= size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = i; j <= size; j++)
            {
                if (j == i || j == size || i == 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c ", symbol); fprintf(m,"%c",symbol); // Print the symbol instead of changing the text color
                }
                else
                {
                    printf("  ");fprintf(m," ");
                }
            }
            printf("\n");fprintf(m,"\n");
            
        }
        fclose(m);
    }
}

void right_invert_triangle(int size, char symbol, int position, int outlinecolor, int fillcolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == 1 || j == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
        }
        fclose(m);
    }
    //right
    if (position == 2)
    {
       
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 1; j <= i; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == 1 || j == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            
            printf("\n");fprintf(m,"\n");
             
        }
        fclose(m);
    }
    //middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");


            for (int j = 1; j <= i; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == 1 || j == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
                }
            }
            printf("\n");fprintf(m,"\n");
           
        }
        fclose(m);
    }
}

void hollow_right_invert_triangle(int size, char symbol, int position, int outlinecolor)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == 1 || j == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
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
    if (position == 2)
    {
       
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            for (int j = 1; j <= i; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == 1 || j == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
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
    //middle
    if (position == 3)
    {
       

        for (int i = 1; i <= size; i++)
        {
            printf("                                                                ");
           fprintf(m,"                                                                ");
            for (int j = 1; j <= i; j++)
            {
                printf(" ");fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == 1 || j == size || j == i)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol); fprintf(m,"%c",symbol);
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