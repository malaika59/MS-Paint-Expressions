#include "data_header.h"

  

void horizental_line(int row,char symbol,int position,int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

   if (position == 1)
    {
        
        for (int i = 1; i <= row; i++)
        {
            changeTextColor(color);
            printf("%c", symbol);fprintf(m,"%c",symbol);
        }
        fclose(m);
    }
    // right
    if (position == 2)
    {
        
       printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
        for (int i = 1; i <= row; i++)
        {
            changeTextColor(color);
            printf("%c", symbol);fprintf(m,"%c",symbol);
        }
        fclose(m);
    }
    // middle
    if (position == 3)
    {
        printf("                                                                ");
           fprintf(m,"                                                                ");
        
       
        for (int i = 1; i <= row; i++)
        {
            changeTextColor(color);
            printf("%c", symbol);fprintf(m,"%c",symbol);
        }
        fclose(m);
    } 
}

void verticle_line(int row,char symbol,int position,int color)
{FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {
        for (int i = 1; i <= row; i++)
        {
            changeTextColor(color);
            printf("%c", symbol);fprintf(m,"%c",symbol);
            printf("\n"); fprintf(m,"\n");
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
           changeTextColor(color);
            printf("%c", symbol);fprintf(m,"%c",symbol);
            printf("\n"); fprintf(m,"\n");
            
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
            changeTextColor(color);
            printf("%c", symbol);fprintf(m,"%c",symbol);
            printf("\n"); fprintf(m,"\n");
           

        }
        fclose(m);
    }
}