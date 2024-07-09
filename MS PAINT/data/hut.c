#include "data_header.h"
void filled_hut(int size, int outline_color_choice, char character, int position)
{
    // saving the address of file in "fp"
    FILE *fp = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w");
    
    // left
    if (position == 1)
    {
        for (int rows = 1; rows <= size; rows++)
        {
            for (int j = size; j >= rows; j--)
            {
                printf(" ");
                fprintf(fp, " ");
            }
            for (int k = 1; k <= rows; k++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf(" %c", character);
                fprintf(fp, " %c", character);
            }
            for (int l = size - 1; l >= rows; l--)
            {
                printf(" ");
                fprintf(fp, " ");
            }
            for (int m = 1; m <= size / 2; m++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf(" %c", character);
                fprintf(fp, " %c", character);
            }
            printf("\n");
            fprintf(fp, "\n");
        }
        for (int o = 1; o <= size; o++)
        {
            for (int p = 1; p <= size; p++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf("  %c", character);
                fprintf(fp, "  %c", character);
            }
            printf("\n");
            fprintf(fp, "\n");
        }
        fclose(fp);
    }
    // middle
    if (position == 2)
    {
        // declaring coordinates for position of the shape
       
        for (int rows = 1; rows <= size; rows++)
        {
           printf("                                                                ");
           fprintf(fp,"                                                                ");
            for (int j = size; j >= rows; j--)
            {
                printf(" ");
                fprintf(fp, " ");
            }
            for (int k = 1; k <= rows; k++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf(" %c", character);
                fprintf(fp, " %c", character);
            }
            for (int l = size - 1; l >= rows; l--)
            {
                printf(" ");
                fprintf(fp, " ");
            }
            for (int m = 1; m <= size / 2; m++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf(" %c", character);
                fprintf(fp, " %c", character);
            }
            
            printf("\n");
            fprintf(fp, "\n");
        }
        for (int o = 1; o <= size; o++)
        {
           printf("                                                                ");
           fprintf(fp,"                                                                ");
            for (int p = 1; p <= size; p++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf("  %c", character);
                fprintf(fp, "  %c", character);
            }
           
            printf("\n");
            fprintf(fp, "\n");
        }
        fclose(fp);
    }
    // right
    if (position == 3)
    {
        // declaring coordinates for position of the shape
        
        for (int rows = 1; rows <= size; rows++)
        {
           printf("                                                                                                                    ");
            fprintf(fp,"                                                                                                                    ");
            for (int j = size; j >= rows; j--)
            {
                printf(" ");
                fprintf(fp, " ");
            }
            for (int k = 1; k <= rows; k++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf(" %c", character);
                fprintf(fp, " %c", character);
            }
            for (int l = size - 1; l >= rows; l--)
            {
                printf(" ");
                fprintf(fp, " ");
            }
            for (int m = 1; m <= size / 2; m++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf(" %c", character);
                fprintf(fp, " %c", character);
            }
           
            printf("\n");
            fprintf(fp, "\n");
        }
        for (int o = 1; o <= size; o++)
        {
           printf("                                                                                                                    ");
            fprintf(fp,"                                                                                                                    ");
            for (int p = 1; p <= size; p++)
            {
                changeTextColor(outline_color_choice); // outline color function
                printf("  %c", character);
                fprintf(fp, "  %c", character);
            }
           
            printf("\n");
            fprintf(fp, "\n");
        }
        fclose(fp);
    }
}