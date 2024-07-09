#include "data_header.h"
void tree(int symbol,int position,int outlinecolor,int fillcolor,int n)
{
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper


    if (position == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            // Print spaces before the stars
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }

            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || i == n || j == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            // Move to the next line
            printf("\n");
            fprintf(m, "\n");
        }
        // for middle part

        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }

        // for last tripo
        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);
    }

    // right
    if (position == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("                                                                                                   ");
            fprintf(m, "                                                                                                   ");
            // Print spaces before the stars
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }

            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || i == n || j == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            // Move to the next line
            printf("\n");
            fprintf(m, "\n");
        }
        // for middle part

        for (int i = 4; i <= n; i++)
        {
            printf("                                                                                                   ");
            fprintf(m, "                                                                                                   ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }

        // for last tripo
        for (int i = 4; i <= n; i++)
        {
            printf("                                                                                                   ");
            fprintf(m, "                                                                                                   ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                 ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);
        fclose(m);
    }

    // middle
    if (position == 3)
    {

        for (int i = 1; i <= n; i++)
        {
            printf("                                                 ");
            fprintf(m, "                                                 ");
            // Print spaces before the stars
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }

            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || i == n || j == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }

            // Move to the next line
            printf("\n");
            fprintf(m, "\n");
        }
        // for middle part

        for (int i = 4; i <= n; i++)
        {
            printf("                                                 ");
            fprintf(m, "                                                 ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }

        // for last tripo
        for (int i = 4; i <= n; i++)
        {
            printf("                                                ");
            fprintf(m, "                                                 ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    changeTextColor(fillcolor);
                    printf("%c", symbol);
                }
            }
            printf("\n");
            fprintf(m, "\n");
        }

        printf("                                                 ");
        fprintf(m, "                                                     ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                 ");
        fprintf(m, "                                                     ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                 ");
        fprintf(m, "                                                     ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                 ");
        fprintf(m, "                                                      ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);
        fclose(m);
    }
}

// hollow tree

void hollow_tree(int symbol,int position,int outlinecolor,int fillcolor,int n)
{
    
    FILE*m;
    m=fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt","w");//hr function k uper

   

    if (position == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            // Print spaces before the stars
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }

            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || i == n || j == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }

            // Move to the next line
            printf("\n");
            fprintf(m, "\n");
        }
        // for middle part

        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

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

        // for last tripo
        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

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

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);

        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);
        fclose(m);
    }

    // right
    if (position == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("                                                                                                   ");
            fprintf(m, "                                                                                                   ");
            // Print spaces before the stars
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }

            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || i == n || j == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }

            // Move to the next line
            printf("\n");
            fprintf(m, "\n");
        }
        // for middle part

        for (int i = 4; i <= n; i++)
        {
            printf("                                                                                                   ");
            fprintf(m, "                                                                                                   ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

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

        // for last tripo
        for (int i = 4; i <= n; i++)
        {
            printf("                                                                                                   ");
            fprintf(m, "                                                                                                   ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

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

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                                                                   ");
        fprintf(m, "                                                                                                   ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);
        fclose(m);
    }

    // middle
    if (position == 3)
    {

        for (int i = 1; i <= n; i++)
        {
            printf("                                                 ");
            fprintf(m, "                                                 ");
            // Print spaces before the stars
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }

            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j == 1 || i == n || j == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);
                    printf("%c", symbol);
                    fprintf(m, "%c", symbol);
                }
                else
                {
                    printf(" ");
                    fprintf(m, " ");
                }
            }

            // Move to the next line
            printf("\n");
            fprintf(m, "\n");
        }
        // for middle part

        for (int i = 4; i <= n; i++)
        {
            printf("                                                 ");
            fprintf(m, " ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

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

        // for last tripo
        for (int i = 4; i <= n; i++)
        {
            printf("                                                ");
            fprintf(m, "                                                 ");
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
                fprintf(m, " ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (i == n || k == 1 || k == 2 * i - 1)
                {
                    changeTextColor(outlinecolor);

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

        printf("                                                 ");
        fprintf(m, "                                                  ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                 ");
        fprintf(m, "                                                 ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                 ");
        fprintf(m, "                                                 ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);

        printf("                                                 ");
        fprintf(m, "                                                 ");
        for (int i = 1; i <= n - 1; i++)
        {
            printf(" ");
            fprintf(m, " ");
        }

        changeTextColor(fillcolor);
        printf("%c \n", symbol);
        fprintf(m, "%c", symbol);
        fclose(m);
    }
}