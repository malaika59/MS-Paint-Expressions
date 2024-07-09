#include "data_header.h"
void oval(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{ FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 3; i <= size; i++)
        {
            for (int j = i; j <= size; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int j = 1; j < i; j++)
            {
                if (i == j || j == 1) // left triangle
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
            for (int j = 1; j <= i; j++) // right triangle
            {
                if (i == j || j == size)
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

             printf("\n");
             fprintf(m,"\n");
        }
        for (int i = 1; i <= size; i++) // left square
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
                else
                {

                    changeTextColor(fillcolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (int i = 1; i <= size; i++) // neechy wala square
        {
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
                else
                {

                    changeTextColor(fillcolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (int i = 1; i <= size - 2; i++) // triangle
        {

            for (int j = 1; j <= i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == j)
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
            for (int j = i; j <= size - 1; j++) // right triangle
            {
                if (j == size - 2)
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
             printf("\n");
             fprintf(m,"\n");
        }
        fclose(m);
    }
    if (position == 2)
    {
        

        for (int i = 3; i <= size; i++)
        {
              
printf("                                                                ");
fprintf(m,"                                                                ");
            for (int j = i; j <= size; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int j = 1; j < i; j++)
            {
                if (i == j || j == 1) // left triangle
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
            for (int j = 1; j <= i; j++) // right triangle
            {
                if (i == j || j == size)
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

             printf("\n");
             fprintf(m,"\n");
            
        }
        for (int i = 1; i <= size; i++) // left square
        {
              printf("                                                                ");
              fprintf(m,"                                                                ");

            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
                else
                {

                    changeTextColor(fillcolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
            }

             printf("\n");
             fprintf(m,"\n");
           
        }
        for (int i = 1; i <= size; i++) // neechy wala square
        {
              
printf("                                                                ");
fprintf(m,"                                                                ");
            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
                else
                {

                    changeTextColor(fillcolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
            }

             printf("\n");
             fprintf(m,"\n");
            
        }
        for (int i = 1; i <= size - 2; i++) // triangle
        {
              printf("                                                                ");
              fprintf(m,"                                                                ");

            for (int j = 1; j <= i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == j)
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
            for (int j = i; j <= size - 2; j++) // right triangle
            {
                if (j == size - 2)
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
             printf("\n");
             fprintf(m,"\n");
            
        }
        fclose(m);
    }
    //right
    if (position == 3)
    {
        
        for (int i = 3; i <= size; i++)
        {
              printf("                                                                                                                    ");
               fprintf(m,"                                                                                                                    ");


            for (int j = i; j <= size; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int j = 1; j < i; j++)
            {
                if (i == j || j == 1) // left triangle
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
            for (int j = 1; j <= i; j++) // right triangle
            {
                if (i == j || j == size)
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

             printf("\n");
             fprintf(m,"\n");
        }
        for (int i = 1; i <= size; i++) // left square
        {
              
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
                else
                {

                    changeTextColor(fillcolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (int i = 1; i <= size; i++) // neechy wala square
        {
              
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (int j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
                else
                {

                    changeTextColor(fillcolorChoice);
                    printf(" %c", symbol);
                    fprintf(m," %c",symbol);
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (int i = 1; i <= size - 2; i++) // triangle
        {
          
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (int j = 1; j <= i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (int j = i; j <= size; j++)
            {
                if (i == j)
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
            for (int j = i; j <= size - 2; j++) // right triangle
            {
                if (j == size - 2)
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
            
             printf("\n");
             fprintf(m,"\n");
        }
        fclose(m);
    }
}
void hollowoval(int size, int outlinecolorChoice, char symbol, int position)
{ FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

int i, j;
    if (position == 1)
    {
        for (i = 3; i <= size; i++)
        {
            for (j = i; j <= size; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (j = 1; j < i; j++)
            {
                if (i == j || j == 1) // left triangle
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   printf(" ");
                    fprintf(m," ");
                }
            }
            for (j = 1; j <= i; j++) // right triangle
            {
                if (i == j || j == size)
                {
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
        for (i = 1; i <= size; i++) // left square
        {
            for (j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("  ");
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (i = 1; i <= size; i++) // neechy wala square
        {
            for (j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("  ");
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (i = 1; i <= size - 2; i++) // triangle
        {

            for (j = 1; j <= i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (j = i; j <= size; j++)
            {
                if (i == j )
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   printf(" ");
                    fprintf(m," ");
                }
            }
            for (j = i; j <= size - 2; j++) // right triangle
            {
                if (j == size - 2)
                {
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
    if (position == 2)
    {
        
        
        for (i = 3; i <= size; i++)
        {
             printf("                                                                ");
             fprintf(m,"                                                                ");

            for (j = i; j <= size; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (j = 1; j < i; j++)
            {
                if (i == j || j == 1) // left triangle
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   printf(" ");
                    fprintf(m," ");
                }
            }
            for (j = 1; j <= i; j++) // right triangle
            {
                if (i == j || j == size)
                {
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
        for (i = 1; i <= size; i++) // left square
        {
              printf("                                                                ");
              fprintf(m,"                                                                ");

            for (j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("  ");
                }
            }

             printf("\n");
             fprintf(m,"\n");
            
        }
        for (i = 1; i <= size; i++) // neechy wala square
        {
              
printf("                                                                ");
fprintf(m,"                                                                ");
            for (j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("  ");
                }
            }

             printf("\n");
             fprintf(m,"\n");
           
        }
        for (i = 1; i <= size - 2; i++) // triangle
        {
              printf("                                                                ");
              fprintf(m,"                                                                ");

            for (j = 1; j <= i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (j = i; j <= size; j++)
            {
                if (i == j)
                {
                   printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   printf(" ");
                    fprintf(m," ");
                }
            }
            for (j = i; j <= size - 2; j++) // right triangle
            {
                if (j == size - 2)
                {
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
    if (position == 3)
    {
        
        for (i = 3; i <= size; i++)
        {
             
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (j = i; j <= size; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (j = 1; j < i; j++)
            {
                if (i == j || j == 1) // left triangle
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   printf(" ");
                    fprintf(m," ");
                }
            }
            for (j = 1; j <= i; j++) // right triangle
            {
                if (i == j || j == size)
                {
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
        for (i = 1; i <= size; i++) // left square
        {
              
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("  ");
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (i = 1; i <= size; i++) // neechy wala square
        {
             
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (j = 1; j <= size; j++)
            {
                if (j == 1 || j == size)
                {
                    printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("  ");
                }
            }

             printf("\n");
             fprintf(m,"\n");
        }
        for (i = 1; i <= size - 2; i++) // triangle
        {
             
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (j = 1; j <= i; j++)
            {
               printf(" ");
                    fprintf(m," ");
            }
            for (j = i; j <= size; j++)
            {
                if (i == j)
                {
                   printf("%c", symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                   printf(" ");
                    fprintf(m," ");
                }
            }
            for (j = i; j <= size - 2; j++) // right triangle
            {
                if (j == size - 2)
                {
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