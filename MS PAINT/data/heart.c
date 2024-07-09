#include "data_header.h"



void hollowheart(int size, int outlinecolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

 if (position == 1)
    {
        // Printing top semi circular shapes of heart
        for (int i = size / 2; i <= size; i += 2)
        {
            // Printing Spaces
            for ( int j = 1; j < size - i; j += 2)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for left semi-circle
            for (int j = 1; j <= i; j++)
            {
                if ( j == 1 || j == i)
               { changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Printing Spaces
            for (int j = 1; j <= size - i; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for right semi-circle
            for (int j = 1; j <= i; j++)
            {
                if ( j == 1 || j == i)
                {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Move to the next row
            printf("\n");
            fprintf(m,"\n");
        }

        // Printing inverted star pyramid
        for (int i = size; i >= 1; i--)
        {
            for (int j = i; j < size; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Print stars for the inverted pyramid
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if ( j == 1 || j == (i * 2) - 1)
                {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Move to the next row
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }
    if (position == 2)
    {
       

        // Printing top semi circular shapes of heart
        for (int i = size / 2; i <= size; i += 2)
        {
            
                  printf("                                                                ");
                  fprintf(m,"                                                                ");


            // Printing Spaces
            for (int j = 1; j < size - i; j += 2)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for left semi-circle
            for (int j = 1; j <= i; j++)
            {
                if ( j == 1 || j == i)
                {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Printing Spaces
            for (int j = 1; j <= size - i; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for right semi-circle
            for (int j = 1; j <= i; j++)
            {
                if ( j == 1 || j == i)
                {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }

        // Printing inverted star pyramid
        for (int i = size; i >= 1; i--)
        {
            
                  printf("                                                                ");
                  fprintf(m,"                                                                ");

            for (int j = i; j < size; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Print stars for the inverted pyramid
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if ( j == 1 || j == (i * 2) - 1)
                {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }
    if (position == 3)
    {
        

        // Printing top semi circular shapes of heart
        for (int i = size / 2; i <= size; i += 2)
        {
            
                   printf("                                                                                                                    ");
                   fprintf(m,"                                                                                                                    ");

                   

            // Printing Spaces
            for (int j = 1; j < size - i; j += 2)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for left semi-circle
            for (int j = 1; j <= i; j++)
            {
                if ( j == 1 || j == i)
            {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Printing Spaces
            for (int j = 1; j <= size - i; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for right semi-circle
            for (int j = 1; j <= i; j++)
            {
                if ( j == 1 || j == i)
                   { changeTextColor(outlinecolorChoice);
                   printf("*");
                   fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }

        // Printing inverted star pyramid
        for (int i = size; i >= 1; i--)
        {
            
                   printf("                                                                                                                    ");
                   fprintf(m,"                                                                                                                    ");


            for (int j = i; j < size; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Print stars for the inverted pyramid
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if (j == 1 || j == (i * 2) - 1)
                    {changeTextColor(outlinecolorChoice);
                    printf("*");
                    fprintf(m,"%c",symbol);}
                else
                    printf(" ");
                fprintf(m," ");
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }

}
void heart(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

if (position == 1)
    {
        /* printing top semi circular shapes of heart */

        // Printing top semi circular shapes of heart
        for (int i = size / 2; i <= size; i += 2)
        {
            // Printing Spaces
            for (int j = 1; j < size - i; j += 2)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for left semi-circle
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Printing Spaces
            for (int j = 1; j <= size - i; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for right semi-circle
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Move to the next row
            printf("\n");
            fprintf(m,"\n");
        }

        // Printing inverted star pyramid
        for (int i = size; i >= 1; i--)
        {
            for (int j = i; j < size; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Print stars for the inverted pyramid
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if (j == 1 || j == (i * 2) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Move to the next row
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }

    if (position == 2)
    {


        // Printing top semi circular shapes of heart
        for (int i = size / 2; i <= size; i += 2)
        {
            
                   printf("                                                                ");
                   fprintf(m,"                                                                ");



            // Printing Spaces
            for (int j = 1; j < size - i; j += 2)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for left semi-circle
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Printing Spaces
            for (int j = 1; j <= size - i; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for right semi-circle
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }

        // Printing inverted star pyramid
        for (int i = size; i >= 1; i--)
        {
        
                   printf("                                                                ");
                   fprintf(m,"                                                                ");


            for (int j = i; j < size; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Print stars for the inverted pyramid
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if (j == 1 || j == (i * 2) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }

    if (position == 3)
    {


        // Printing top semi circular shapes of heart
        for (int i = size / 2; i <= size; i += 2)
        {
            
                   printf("                                                                                                                    ");
                   fprintf(m,"                                                                                                                    ");


            // Printing Spaces
            for (int j = 1; j < size - i; j += 2)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for left semi-circle
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Printing Spaces
            for (int j = 1; j <= size - i; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Printing stars for right semi-circle
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }

        // Printing inverted star pyramid
        for (int i = size; i >= 1; i--)
        {
            
                   printf("                                                                                                                    ");
                   fprintf(m,"                                                                                                                    ");


            for (int j = i; j < size; j++)
            {
                printf(" ");
                fprintf(m," ");
            }

            // Print stars for the inverted pyramid
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                if (j == 1 || j == (i * 2) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
            }

            // Move to the next row
           
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }
}