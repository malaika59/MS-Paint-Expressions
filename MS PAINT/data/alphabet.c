#include "data_header.h"


void print_A(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size * 2 - 1; j++)
            {
                if (j == size - i + 1 || j == size + i - 1)
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }

                else if (i == size / 2 + 1 && j > size - i + 1 && j < size + i - 1)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size * 2 - 1; j++)
            {
                if (j == size - i + 1 || j == size + i - 1)
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }

                else if (i == size / 2 + 1 && j > size - i + 1 && j < size + i - 1)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size * 2 - 1; j++)
            {
                if (j == size - i + 1 || j == size + i - 1)
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }

                else if (i == size / 2 + 1 && j > size - i + 1 && j < size + i - 1)
                {
                    changeTextColor(color);
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

void print_B(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 || i == size / 2 || i == size) && j < size || j == size && (i != 1 && i != size / 2 && i != size))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
     
        for (int i = 1; i <= size; i++)
        {
           printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 || i == size / 2 || i == size) && j < size || j == size && (i != 1 && i != size / 2 && i != size))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {

        for (int i = 1; i <= size; i++)
        {
             printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 || i == size / 2 || i == size) && j < size || j == size && (i != 1 && i != size / 2 && i != size))
                {
                    changeTextColor(color);
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

void print_C(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    //  left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 || i == size) && j != 1)
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else if (j == 1 && (i != 1 && i != size))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 || i == size) && j != 1)
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else if (j == 1 && (i != 1 && i != size))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 || i == size) && j != 1)
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else if (j == 1 && (i != 1 && i != size))
                {
                    changeTextColor(color);
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

void print_D(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 & j < size - 1) || (i == size & j < size - 1) || ((i >= 2 & i <= size - 1) & j == size))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        { printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 & j < size - 1) || (i == size & j < size - 1) || ((i >= 2 & i <= size - 1) & j == size))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
    

        for (int i = 1; i <= size; i++)
        {
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || (i == 1 & j < size - 1) || (i == size & j < size - 1) || ((i >= 2 & i <= size - 1) & j == size))
                {
                    changeTextColor(color);
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

void print_E(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || i == size / 2 + 1 || j == 1)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
    
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || i == size / 2 + 1 || j == 1)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {


        for (int i = 1; i <= size; i++)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || i == size / 2 + 1 || j == 1)
                {
                    changeTextColor(color);
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

void print_F(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size / 2 + 1 || j == 1)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size / 2 + 1 || j == 1)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size / 2 + 1 || j == 1)
                {
                    changeTextColor(color);
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

void print_G(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if ((j == 1 && i != 0 && i != size - 1) ||
                    ((i == 0 || i == size - 1) && j > 1 &&
                     j < size - 2) ||
                    (i == ((size - 1) / 2) &&
                     j > 2 && j < size - 1) ||
                    (j == size - 2 &&
                     i != 0 && i >= ((size - 1) / 2) && i != size - 1))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 0; i < size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 0; j < size; j++)
            {
                if ((j == 1 && i != 0 && i != size - 1) ||
                    ((i == 0 || i == size - 1) && j > 1 &&
                     j < size - 2) ||
                    (i == ((size - 1) / 2) &&
                     j > 2 && j < size - 1) ||
                    (j == size - 2 &&
                     i != 0 && i >= ((size - 1) / 2) && i != size - 1))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 0; i < size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 0; j < size; j++)
            {
                if ((j == 1 && i != 0 && i != size - 1) ||
                    ((i == 0 || i == size - 1) && j > 1 &&
                     j < size - 2) ||
                    (i == ((size - 1) / 2) &&
                     j > 2 && j < size - 1) ||
                    (j == size - 2 &&
                     i != 0 && i >= ((size - 1) / 2) && i != size - 1))
                {
                    changeTextColor(color);
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

void print_H(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == size / 2 + 1 || j == size || j == 1)
                {
                    changeTextColor(color);
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

    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == size / 2 + 1 || j == size || j == 1)
                {
                    changeTextColor(color);
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

    // middle
    if (position == 3)
    {
    
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == size / 2 + 1 || j == size || j == 1)
                {
                    changeTextColor(color);
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

void print_I(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || j == (size / 2 == 0) || j != (size / 2 == 0) & j == (size / 2 + 1) || i == size)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || j == (size / 2 == 0) || j != (size / 2 == 0) & j == (size / 2 + 1) || i == size)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
           
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || j == (size / 2 == 0) || j != (size / 2 == 0) & j == (size / 2 + 1) || i == size)
                {
                    changeTextColor(color);
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

void print_J(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size && j < size / 2 && j != 1 || j == (size / 2 == 0) && i != size || j != (size / 2 == 0) && j == size / 2 + 1 && i != size || j == 1 && i > size / 2 && i != size)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
    
        for (int i = 1; i <= size; i++)
        {
         printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size && j < size / 2 && j != 1 || j == (size / 2 == 0) && i != size || j != (size / 2 == 0) && j == size / 2 + 1 && i != size || j == 1 && i > size / 2 && i != size)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size && j < size / 2 && j != 1 || j == (size / 2 == 0) && i != size || j != (size / 2 == 0) && j == size / 2 + 1 && i != size || j == 1 && i > size / 2 && i != size)
                {
                    changeTextColor(color);
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

void print_K(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = size; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == j)
                {
                    changeTextColor(color);
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
        for (int i = 2; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == j)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
    
        for (int i = size; i >= 1; i--)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == j)
                {
                    changeTextColor(color);
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
        for (int i = 2; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == j)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
    
        for (int i = size; i >= 1; i--)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == j)
                {
                    changeTextColor(color);
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
        for (int i = 2; i <= size; i++)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || i == j)
                {
                    changeTextColor(color);
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

void print_L(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == size || j == 1)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == size || j == 1)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == size || j == 1)
                {
                    changeTextColor(color);
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

void print_M(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (j == 0 || j == size - 1 || (i == j && j <= size / 2) || (i + j == size - 1 && j >= size / 2))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 0; j < size; j++)
            {
                if (j == 0 || j == size - 1 || (i == j && j <= size / 2) || (i + j == size - 1 && j >= size / 2))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 0; i < size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 0; j < size; j++)
            {
                if (j == 0 || j == size - 1 || (i == j && j <= size / 2) || (i + j == size - 1 && j >= size / 2))
                {
                    changeTextColor(color);
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

void print_N(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == j || j == 1 || j == size)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == j || j == 1 || j == size)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == j || j == 1 || j == size)
                {
                    changeTextColor(color);
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

void print_O(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 && j != 1 && j != size) || (i == size && j != 1 && j != size) || (j == 1 && i != 1 && i != size) || j == size && i != 1 && i != size)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 && j != 1 && j != size) || (i == size && j != 1 && j != size) || (j == 1 && i != 1 && i != size) || j == size && i != 1 && i != size)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 && j != 1 && j != size) || (i == size && j != 1 && j != size) || (j == 1 && i != 1 && i != size) || j == size && i != 1 && i != size)
                {
                    changeTextColor(color);
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

void print_P(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i < size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 && i != 1 || i == 1 && j != size || i == size / 2 && j != size || j == size && i != 1 && i < size / 2)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        for (int i = 1; i < size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 && i != 1 || i == 1 && j != size || i == size / 2 && j != size || j == size && i != 1 && i < size / 2)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {

        for (int i = 1; i < size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 && i != 1 || i == 1 && j != size || i == size / 2 && j != size || j == size && i != 1 && i < size / 2)
                {
                    changeTextColor(color);
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

void print_Q(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // lefft
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 && j != 1 && j != size) || (i == size && j != 1 && j != size) || (j == 1 && i != 1 && i != size) || j == size && i != 1 && i != size || (i == j && i > size / 2))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
    
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 && j != 1 && j != size) || (i == size && j != 1 && j != size) || (j == 1 && i != 1 && i != size) || j == size && i != 1 && i != size || (i == j && i > size / 2))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if ((i == 1 && j != 1 && j != size) || (i == size && j != 1 && j != size) || (j == 1 && i != 1 && i != size) || j == size && i != 1 && i != size || (i == j && i > size / 2))
                {
                    changeTextColor(color);
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

void print_R(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 && j != size || j == 1 && i != 1 || i == size / 2 && j != size || j == size && i < size / 2 && i != 1 || (i == j && i > size / 2))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {

        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 && j != size || j == 1 && i != 1 || i == size / 2 && j != size || j == size && i < size / 2 && i != 1 || (i == j && i > size / 2))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {

        for (int i = 1; i <= size; i++)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 && j != size || j == 1 && i != 1 || i == size / 2 && j != size || j == size && i < size / 2 && i != 1 || (i == j && i > size / 2))
                {
                    changeTextColor(color);
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

void print_S(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 && j != 1 || i == size / 2 && j != 1 && j != size || j == 1 && i > 1 && i < size / 2 || i > size / 2 && i < size && j == size || i == size && j != size)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 && j != 1 || i == size / 2 && j != 1 && j != size || j == 1 && i > 1 && i < size / 2 || i > size / 2 && i < size && j == size || i == size && j != size)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 && j != 1 || i == size / 2 && j != 1 && j != size || j == 1 && i > 1 && i < size / 2 || i > size / 2 && i < size && j == size || i == size && j != size)
                {
                    changeTextColor(color);
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

void print_T(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper


    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || j == (size / 2 == 0) || j != (size / 2 == 0) & j == (size / 2 + 1))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || j == (size / 2 == 0) || j != (size / 2 == 0) & j == (size / 2 + 1))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || j == (size / 2 == 0) || j != (size / 2 == 0) & j == (size / 2 + 1))
                {
                    changeTextColor(color);
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

void print_U(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 && i != size || j == size && i != size || i == size && j != 1 && j != size)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {

        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 && i != size || j == size && i != size || i == size && j != 1 && j != size)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
    
        for (int i = 1; i <= size; i++)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 && i != size || j == size && i != size || i == size && j != 1 && j != size)
                {
                    changeTextColor(color);
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

void print_V(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
            }
            for (int j = 1; j <= size * 2 - (2 * i - 1); j++)
            {
                if (j == 1 || j == size * 2 - (2 * i - 1))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        for (int i = 1; i <= size; i++)
        {
         printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
            }
            for (int j = 1; j <= size * 2 - (2 * i - 1); j++)
            {
                if (j == 1 || j == size * 2 - (2 * i - 1))
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
          
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int sp = 1; sp <= i - 1; sp++)
            {
                printf(" ");
            }
            for (int j = 1; j <= size * 2 - (2 * i - 1); j++)
            {
                if (j == 1 || j == size * 2 - (2 * i - 1))
                {
                    changeTextColor(color);
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

void print_W(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size * 2; j++)
            {
                if (j == 1 || j == size * 2 || (i + j == size + 1) || (j - i == size - 1))
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            
            for (int j = 1; j <= size * 2; j++)
            {

                if (j == 1 || j == size * 2 || (i + j == size + 1) || (j - i == size - 1))
                {
                    changeTextColor(color);
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
    // middlel
    if (position == 3)
    {
    

        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size * 2; j++)
            {
                if (j == 1 || j == size * 2 || (i + j == size + 1) || (j - i == size - 1))
                {
                    changeTextColor(color);
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

void print_X(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size * 2; j++)
            {
                if (i == j || i + j == size + 1)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
    
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size * 2; j++)
            {
                if (i == j || i + j == size + 1)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
        
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size * 2; j++)
            {
                if (i == j || i + j == size + 1)
                {
                    changeTextColor(color);
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

void print_Y(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {
        int mid = (size + 1) / 2;
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if ((j == i && j <= mid) || (j == size - i + 1 && j > mid))
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else if (j == mid && i > mid)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
        
        int mid = (size + 1) / 2;
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if ((j == i && j <= mid) || (j == size - i + 1 && j > mid))
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else if (j == mid && i > mid)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {
    
        int mid = (size + 1) / 2;
        for (int i = 1; i <= size; i++)
        {
            
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if ((j == i && j <= mid) || (j == size - i + 1 && j > mid))
                {
                    changeTextColor(color);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else if (j == mid && i > mid)
                {
                    changeTextColor(color);
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

void print_Z(int size, char symbol, int position, int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    // left
    if (position == 1)
    {

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || i + j == size + 1)
                {
                    changeTextColor(color);
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
    // right
    if (position == 2)
    {
     
        for (int i = 1; i <= size; i++)
        {
             printf("                                                                                                                        ");
            fprintf(m,"                                                                                                                       ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || i + j == size + 1)
                {
                    changeTextColor(color);
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
    // middle
    if (position == 3)
    {

        for (int i = 1; i <= size; i++)
        {
           
              printf("                                                                   ");
            fprintf(m,"                                                                   ");
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || i + j == size + 1)
                {
                    changeTextColor(color);
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