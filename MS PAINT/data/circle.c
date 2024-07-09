#include "data_header.h"

   

void hollowcircle(int size, int outlinecolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

 if (position==2)
    {
      
    
    
        for (int row = 2; row < size; row++)
        {
             
                  printf("                                                                ");
                  fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                 fprintf(m,"   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == 2)
                { changeTextColor(outlinecolorChoice);
                    printf("%c",&symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            
            printf("\n");
            fprintf(m,"\n");
        }
        for (int row = 2; row < size; row++)
        {
              
                  
printf("                                                                ");
fprintf(m,"                                                                ");
            for (int j = 0; j < size * 2 - 1; j++)
            {
                if (j == 0 || j == (size * 2 - 1) - 1)
                { changeTextColor(outlinecolorChoice);
                   printf("%c",&symbol);
                   fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            
            printf("\n");
            fprintf(m,"\n");
        }
        for (int row = size; row >= 2; row--)
        {
            
                  printf("                                                                ");
                  fprintf(m,"                                                                ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m,"   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j== (row * 2 - 1) - 1 || row == 2)
                {
                     changeTextColor(outlinecolorChoice);
                    printf("%c",&symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }
    
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

  if (position==3)
    {
       
    
    
        for (int row = 2; row < size; row++)
        {
            
                 printf("                                                                                                                    "); 
                  fprintf(m,"                                                                                                                    ");


            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m,"   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == 2)
                {
                     changeTextColor(outlinecolorChoice);
                    printf("%c",&symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            
            printf("\n");
            fprintf(m,"\n");
        }
        for (int row = 2; row < size; row++)
        {
        
                 printf("                                                                                                                    ");
                  fprintf(m,"                                                                                                                    ");
 

            for (int j = 0; j < size * 2 - 1; j++)
            {
                if (j == 0 || j == (size * 2 - 1) - 1)
                {
                     changeTextColor(outlinecolorChoice);
                   printf("%c",&symbol);
                   fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            
            printf("\n");
            fprintf(m,"\n");
        }
        for (int row = size; row >= 2; row--)
        {
           
                  
printf("                                                                                                                    ");
 fprintf(m,"                                                                                                                    ");

            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m,"   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j== (row * 2 - 1) - 1 || row == 2)
                {
                     changeTextColor(outlinecolorChoice);
                    printf("%c",&symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }
    //{{{{{{{{{{{{{{{{{{{{{[left]}}}}}}}}}}}}}}}}}}}}}
    if (position==1)
    {
       
    
    
        for (int row = 2; row < size; row++)
        {
             
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m,"   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j == (row * 2 - 1) - 1 || row == 2)
                {
                     changeTextColor(outlinecolorChoice);
                    printf("%c",&symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            printf("\n");
            fprintf(m,"\n");
        }
        for (int row = 2; row < size; row++)
        {
            
            for (int j = 0; j < size * 2 - 1; j++)
            {
                if (j == 0 || j == (size * 2 - 1) - 1)
                {
                     changeTextColor(outlinecolorChoice);
                   printf("%c",&symbol);
                   fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            printf("\n");
            fprintf(m,"\n");
        }
        for (int row = size; row >= 2; row--)
        {
          
            for (int space = 0; space < size - row; space++)
            {
                printf("   ");
                fprintf(m,"   ");
            }
            for (int j = 0; j < row * 2 - 1; j++)
            {
                if (j == 0 || j== (row * 2 - 1) - 1 || row == 2)
                { changeTextColor(outlinecolorChoice);
                    printf("%c",&symbol);
                    fprintf(m,"%c",symbol);
                }
                else
                {
                    printf("   ");
                    fprintf(m,"   ");
                }
            }
            printf("\n");
            fprintf(m,"\n");
        }
        fclose(m);
    }
}
void circle(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

  if (position==2)
 {
   
   
    for(int y=-size; y<=size; y++)
    {
      
              printf("                                                                ");   
              fprintf(m,"                                                                ");  

        for(int x=-size; x<=size; x++)
        {
            if(x*x + y*y <= size*size)
            {
               if (x * x + y * y == size * size) {
                changeTextColor(outlinecolorChoice);
                printf(" %c ", symbol );
                fprintf(m," %c ",symbol); // Print '*' for points on the circumference
            } else {
                changeTextColor(fillcolorChoice);
                printf(" %c ", symbol );
                fprintf(m," %c ",symbol); // Print spaces for points inside or outside the circle
            }
            }           
            else 
            {
                printf("   ");
                fprintf(m,"   ");
            }
        }
        
        printf("\n");
        fprintf(m,"\n");
    }
    fclose(m);
}
//{{{{{{{{{{{{{{{{{{{{{{{left}}}}}}}}}}}}}}}}}}}}}}}

 if (position==1)
 {
   
 
   
    for(int y=-size; y<=size; y++)
    {
       
        for(int x=-size; x<=size; x++)
        {
            if(x*x + y*y <= size*size)
            {
               if (x * x + y * y == size * size) {
                changeTextColor(outlinecolorChoice);
                printf(" %c ", symbol );
                fprintf(m," %c ",symbol); // Print '*' for points on the circumference
            } else {
                changeTextColor(fillcolorChoice);
                printf(" %c ", symbol );
                fprintf(m," %c ",symbol); // Print spaces for points inside or outside the circle
            }
            }           
            else 
            {
                printf("   ");
                fprintf(m,"   ");
            }
        }
        printf("\n");
        fprintf(m,"\n");
    }
    fclose(m);
}
//{{{{{{{{{{{{{right}}}}}}}}}}}}}

 if (position==3)
 {
   
   
    for(int y=-size; y<=size; y++)
    {
      
             printf("                                                                                                                    ");
              fprintf(m,"                                                                                                                    ");
     

        for(int x=-size; x<=size; x++)
        {
            if(x*x + y*y <= size*size)
            {
               if (x * x + y * y == size * size) {
                changeTextColor(outlinecolorChoice);
                printf(" %c ", symbol );
                fprintf(m," %c ",symbol); // Print '*' for points on the circumference
            } else {
                changeTextColor(fillcolorChoice);
                printf(" %c ", symbol );
                fprintf(m," %c ",symbol); // Print spaces for points inside or outside the circle
            }
            }           
            else 
            {
                printf("   ");
                fprintf(m,"   ");
            }
        }
        
        printf("\n");
        fprintf(m,"\n");
    }
    fclose(m);
}   
}