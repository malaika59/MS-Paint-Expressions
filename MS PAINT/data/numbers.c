#include "data_header.h"

void one(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
void two(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
        for (int i = 2; i <= size - 1; i++)
        {

            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1)
                {
                    changeTextColor(outlinecolorChoice);
                    printf(" %c", symbol);
                    fprintf(m, " %c", symbol);
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
void three(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || i == size - 1 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || i == size - 1 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {

            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || i == size - 1 || s == (size * 2 - 1) - 1)
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
void four(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
void five(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || i == size - 1 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || i == size - 1 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || i == size - 1 || s == (size * 2 - 1) - 1)
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
void six(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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
void seven(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == (size * 2 - 1) - 1)
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
void eight(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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
void nine(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == (size * 2 - 1) - 1)
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

void zero(int size, int outlinecolorChoice, char symbol, int position)
{
    FILE *m;
    m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "w"); // hr function k uper

    if (position == 1)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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

    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{right}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 3)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                                                                        ");
            fprintf(m, "                                                                                                                       ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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
    //{{{{{{{{{{{{{{{{{{{{{{{{{{{{{middle}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    if (position == 2)
    {

        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (i == 2 || s == 0 || s == (size * 2 - 1) - 1)
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
        for (int i = 2; i <= size - 1; i++)
        {
            printf("                                                                   ");
            fprintf(m, "                                                                   ");
            for (int s = 0; s < size * 2 - 1; s++)
            {
                if (s == 0 || i == size - 1 || s == (size * 2 - 1) - 1)
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