#include "data_header.h"

void sixstarhollow(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE*mal;
    mal=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    { 


        for (int i = 0; i < size; i++)
        {
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf(" ");
                    fprintf(mal, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(mal, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing middle part
            for (int o = 0; o < size; o++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            printf("\n");
            fprintf(mal, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // middle
            for (int o = 0; o < size; o++)
            {
                printf("  ");
                fprintf(mal, " ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
        // 4 portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(mal, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing middle part
            for (int m = 0; m < size; m++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            printf("\n");
            fprintf(mal, "\n");
        }
        // 5 portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // middle
            for (int o = 0; o < size; o++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
         fclose(mal);
    }

    //               {{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}]
    if (position == 2)
    {

        for (int i = 0; i < size; i++)
        {
printf("                                                                ");
fprintf(mal,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(mal, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(mal, "   ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
printf("                                                                ");
fprintf(mal,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("      ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(mal, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(mal, "   ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(mal, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            printf("\n");
            fprintf(mal, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
printf("                                                                ");
fprintf(mal,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(mal, "     ");
                }
                else
                {
                    printf("      ");
                    fprintf(mal, "     ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(mal, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(mal, "   ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
        // 4 portion

        for (int i = 0; i < size; i++)
        {
printf("                                                                ");
fprintf(mal,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("      ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(mal, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(mal, "   ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(mal, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            printf("\n");
            fprintf(mal, "\n");
        }
        // 5 portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
printf("                                                                ");
fprintf(mal,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(mal, "      ");
                }
                else
                {
                    printf("      ");
                    fprintf(mal, "      ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(mal, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(mal, "   ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
printf("                                                                ");
fprintf(mal,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(mal, "      ");
                }
                else
                {
                    printf("      ");
                    fprintf(mal, "      ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(mal, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(mal, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
         fclose(mal);
    }

    //               {{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}]

    if (position == 3)
    {

        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(mal,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("        ");
                    fprintf(mal, "        ");
                }
                else
                {
                    printf("        ");
                    fprintf(mal, "        ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }

            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(mal,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }

            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(mal, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            printf("\n");
            fprintf(mal, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(mal,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }

            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
        // 4 portion

        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(mal,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }

            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(mal, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing middle part
            for (int m = 0; m < size; m++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            printf("\n");
            fprintf(mal, "\n");
        }
        // 5 portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(mal,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }

            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // middle
            for (int m = 0; m < size; m++)
            {
                printf("  ");
                fprintf(mal, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
printf("                                                                                                                    ");
fprintf(mal,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(mal, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(mal, "       ");
                }
            }

            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(mal, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(mal, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(mal, " ");
                }
            }

            printf("\n");
            fprintf(mal, "\n");
        }
         fclose(mal);
    }
}
void sixstar(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{
     FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int i = 0; i < size; i++)
        {
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // outline
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // 4th portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // 5th portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 0; i < size; i++)
        {
printf("                                                                ");
fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("     ");
                    fprintf(m, "     ");
                }
                else
                {
                    printf("     ");
                    fprintf(m, "     ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // outline
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // 4th portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // 5th portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("        ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("        ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }

            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // outline
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // 4th portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // 5th portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
    }
}
void fourstar(int size, int outlinecolorChoice, int fillcolorChoice, char symbol, int position)
{
     FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int i = 0; i < size; i++)
        {
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // outline
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // 4th portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // 5th portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("     ");
                    fprintf(m, "      ");
                }
                else
                {
                    printf("     ");
                    fprintf(m, "      ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // outline
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // second portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("    ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("    ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
    }
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("        ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("        ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }

            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // outline
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }

        // 4th portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }
        // 5th portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            // middle
            for (int h = 0; h < size; h++)
            {
                // fill
                changeTextColor(fillcolorChoice);
                printf("%c ", symbol);
                fprintf(m, "%c", symbol);
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            printf("                                                                                                                    ");
            fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
                {
                    // out
                    changeTextColor(outlinecolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    // fill
                    changeTextColor(fillcolorChoice);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            printf("\n");
            fprintf(m, "\n");
        }
    }
}
void fourstarhollow(int size, int outlinecolorChoice, char symbol, int position)
{
     FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

    if (position == 1)
    {

        for (int i = 0; i < size; i++)
        {
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
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

        // second portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
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
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(m, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
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
        // third portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
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
            // middle
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(m, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
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
        // 4 portion

        for (int i = 0; i < size; i++)
        {
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
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
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(m, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
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
        // 5 portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
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
            // middle
            for (int h = 0; h< size; h++)
            {
                printf("  ");
                fprintf(m, " ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
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
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
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
    }

    //               {{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}]
    if (position == 2)
    {

        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
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

        // 4 portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(m, "      ");
                }
                else
                {
                    printf("      ");
                    fprintf(m, "      ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
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
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(m, " ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
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
        // 5 portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
            printf("                                                                ");
            fprintf(m,"                                                                ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(m, "      ");
                }
                else
                {
                    printf("      ");
                    fprintf(m, "      ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
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

            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(m, " ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
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
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
            // pehli spaces
            printf("                                                                ");
            fprintf(m,"                                                                ");
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("      ");
                    fprintf(m, "      ");
                }
                else
                {
                    printf("      ");
                    fprintf(m, "      ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("   ");
                    fprintf(m, "   ");
                }
                else
                {
                    printf("   ");
                    fprintf(m, "   ");
                }
            }
            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
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
    }

    //               {{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}]

    if (position == 3)
    {

        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("        ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("        ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }

            // printing uper wali pehli tip
            for (int j = 0; j < size - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
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

        // 4 portion

        for (int i = 0; i < size; i++)
        {
            printf("                                                                                                                    ");

            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }

            // printing left wali pehli tip
            for (int j = size - 1; j >= i; j--)
            {
                printf(" ");
                fprintf(m, " ");
            }

            for (int k = 0; k < i; k++)
            {
                if ((k == 0))
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
            // printing middle part
            for (int h = 0; h < size; h++)
            {
                printf("  ");
                fprintf(m, "  ");
            }

            // printing right wali pehli tip
            for (int j = 0; j <= i; j++)
            {
                if ((j == i))
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
        // 5 portion
        // pehli tip
        for (int i = 0; i < size; i++)
        {
printf("                                                                                                                    ");
fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }

            for (int j = 0; j <= i - 1; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = size; k > i; k--)
            {
                if ((k == size))
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
            // middle
            for (int h = 0;h < size; h++)
            {
                printf("  ");
                fprintf(m, "  ");
            }
            // dusri right triangle
            for (int j = size; j >= i; j--)
            {
                if ((j == 0) || j == i)
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
        // sixth portion
        for (int i = size; i >= 0; i--)
        {
printf("                                                                                                                    ");
fprintf(m,"                                                                                                                    ");
            // pehli spaces
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }
            for (int j = 0; j <= size; j++)
            {

                if ((j == 0) || (i == size) || (j == i))
                {

                    printf("       ");
                    fprintf(m, "       ");
                }
                else
                {
                    printf("       ");
                    fprintf(m, "       ");
                }
            }

            for (int j = 0; j <= size; j++)
            {
                if ((j == 0) || (i == size) || (j == i))
                {
                    printf(" ");
                    fprintf(m, " ");
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }
            // printing last wali pehli tip
            for (int j = 0; j < size - i; j++)
            {

                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 0; k < i * 2 - 1; k++)
            {
                if (k == 0 || k == (i * 2 - 1) - 1)
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
    }
}