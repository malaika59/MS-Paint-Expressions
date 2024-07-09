#include "interface_header.h"
#include <stdlib.h>
bool filepresent(const char *name)
{
    FILE *file = fopen(name, "r");
    if (file)
    {
        fclose(file);
        return true;
    }
    return false;
}
void clearscreen()
{
    system("cls");
}

struct record
{
    int row, n, size, position, outlinecolor, fillcolor, outlinecolorChoice, fillcolorChoice, color, col;
    int type, fill, options, option, shape, outline_color_choice;
    char symbol, character;
};

void main_menu()
{

    printf("                      --------------------------------------------------------------\n");
    printf("                     |                     WELCOME TO MS PAINT                      | \n");
    printf("                     ---------------------------------------------------------------\n");
    int options, shape;
    int option;
    struct record opt;

    printf("\n                                *-*-*-*-*-*-*OPTIONS*-*-*-*-*-*-*            \n");
    printf("                                      enter the 1 for shapes\n");
    printf("                                 enter the 2 to draw on terminal\n");
    printf("                                   enter the 3 to save the file\n");
    printf("                                 enter the 4 to view existig file\n");
    printf("                                 enter the 5 to edit existig file\n");
    printf("                                         enter q to quit\n");
    printf("\n                                    *-*-*-*-*-*-*-*-*-*-*-*-*            \n");
    scanf("%d", &opt.option);
    while (1)
    {
        if (opt.option == 2)
        {
            void freehand_interface();
            {
                char symbol;
                printf("enter the symbol with which you want to draw");
                scanf(" %c", &symbol);
                int outline_color_choice;
                printf("Enter the outline color: \n");
                printf("1.Red\n2.Green\n3.Blue\n4.Yellow\n5.Default(White)\n");
                scanf("%d", &outline_color_choice);
                switch (outline_color_choice)
                {
                case 1:
                    outline_color_choice = 31; // Red
                    break;
                case 2:
                    outline_color_choice = 32; // Green
                    break;
                case 3:
                    outline_color_choice = 34; // Blue
                    break;
                case 4:
                    outline_color_choice = 33; // Yellow
                    break;
                case 5:
                default:
                    outline_color_choice = 0; // Default (White)
                }
                clearscreen();
                printf("\npress spacebar and arrow keys simultaneously to print symbol\n");
                printf("press backspace and arrow keys simultaneously to erase symbol\n");
                printf("press w to quit this option\n");

                int x = 50, y = 10;
                char ma;

                location(x, y);

                while (1)
                {
                    ma = getch();
                    if (ma == 72)
                    {
                        y--;
                    }
                    else if (ma == 80)
                    {
                        y++;
                    }
                    else if (ma == 75)
                    {
                        x--;
                    }
                    else if (ma == 77)
                    {
                        x++;
                    }
                    else if (ma == 8 || ma == 72 || ma == 75 || ma == 77 || ma == 80)
                    {

                        printf(" ");
                    }
                    else if (ma == 32 || ma == 75 || ma == 77 || ma == 72 || ma == 80) // spacebar and arrow keys
                    {
                        changeTextColor(outline_color_choice);
                        printf("%c", symbol);
                    }
                    else if (ma == 'w')
                    {
                        char f;
                        printf("\nenter 0 to go back to main menu and q to quit\n");
                        scanf(" %c", &f);
                        if (f == 'q')
                        {
                            printf("program has been quitted");
                            exit(0);
                        }
                        else
                        {

                            printf("                      --------------------------------------------------------------\n");
                            printf("                      |                    WELCOME TO MS PAINT                      | \n");
                            printf("                      --------------------------------------------------------------\n");
                            printf("\n                                             OPTIONS\n");
                            printf("                                      enter the 1 for shapes\n");
                            printf("                                 enter the 2 to draw on terminal\n");
                            printf("                                   enter the 3 to save the file\n");
                            printf("                                 enter the 4 to view existig file\n");
                            printf("                                 enter the 5 to edit existig file\n");
                            printf("                                         enter q to quit\n");
                            scanf("%d", &opt.option);
                            continue;
                        }
                    }

                    location(x, y);
                }
            }
        }

        if (opt.option == 1)
        {
            printf("\n             *-*-*-*-*-*-*CUSTOM SHAPES*-*-*-*-*-*-*   \n");
            printf("                     enter 1 to draw alphabet\n");
            printf("                      enter 2 to draw arrows\n");
            printf("                      enter 3 to draw chatbox\n");
            printf("                      enter 4 to draw circle\n");
            printf("                      enter 5 to draw diamond\n");

            printf("                      enter 7 to draw heart\n");
            printf("                      enter 8 to draw hexagon\n"); //
            printf("                       enter 9 to draw kite\n");
            printf("                       enter 10 to draw line\n");
            printf("                      enter 11 to draw numbers\n");
            printf("                      enter 12 to draw oval\n");
            printf("                   enter 13 to draw parallelogram\n");
            printf("                     enter 14 to draw pentagon\n");
            printf("                     enter 15 to draw pyramid\n");
            printf("                    enter 16 to draw rectangle\n");
            printf("                      enter 17 to draw square\n");
            printf("                      enter 18 to draw stars\n"); //
            printf("                     enter 19 to draw triangle\n");
            printf("                     enter 20 to draw tripezium\n");

            printf("\n               *-*-*-*-*-*-*GRACE SHAPES*-*-*-*-*-*-*        \n");
            printf("                       enter 21 to draw tree\n");
            printf("                        enter 6 to draw hut\n");
            scanf("%d", &opt.shape);
            if (opt.shape == 1)
            {
                void alphabet_interface();
                {
                    int size, color, position;
                    char symbol;

                    printf("enter symbol with which you want to make the shape\n");
                    scanf(" %c", &symbol);

                    printf("Enter the size:\n ");
                    scanf(" %d", &size);

                    printf(" enter position where you want to place your shape :\n");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &position);

                    printf("Select the color of the square output:\n");
                    printf("1. Red 2. Green,3. Blue,4. Yellow,5. Default (White)\n");
                    printf("Enter your choice (1-5): \n");
                    scanf(" %d", &color);

                    switch (color)
                    {
                    case 1:
                        color = 31; // Red
                        break;
                    case 2:
                        color = 32; // Green
                        break;
                    case 3:
                        color = 34; // Blue
                        break;
                    case 4:
                        color = 33; // Yellow
                        break;
                    case 5:
                    default:
                        color = 0; // Default (White)
                    }
                    char n1, n2;
                    printf("enter first alphabet");
                    scanf(" %c", &n1);
                    printf("enter second alphabet");
                    scanf(" %c", &n2);

                    for (char i = n1; i <= n2; i++)
                    {

                        alphabet_function(size, symbol, i, color, position);
                    }
                }
                char f;
                printf("\nenter 0 to go back to main menu and q to quit\n");
                scanf(" %c", &f);
                if (f == 'q')
                {
                    printf("program has been quitted");
                    exit(0);
                }
                else
                {

                    printf("                      --------------------------------------------------------------\n");
                    printf("                      |                    WELCOME TO MS PAINT                      | \n");
                    printf("                      --------------------------------------------------------------\n");
                    printf("\n                                             OPTIONS\n");
                    printf("                                      enter the 1 for shapes\n");
                    printf("                                 enter the 2 to draw on terminal\n");
                    printf("                                   enter the 3 to save the file\n");
                    printf("                                 enter the 4 to view existig file\n");
                    printf("                                 enter the 5 to edit existig file\n");
                    printf("                                         enter q to quit\n");
                    scanf("%d", &opt.option);
                    continue;
                }
            }
            if (opt.shape == 6)
            {
                struct record hut;
                int size, outline_color_choice;
                char character;
                printf("enter symbol with which you want to make the shape");
                scanf(" %c", &hut.character);
                printf("Enter the  size: ");
                scanf(" %d", &hut.size);

                int position;

                printf("Select the position of the output shape:\n");
                printf("1. left\n");
                printf("2. middle\n");
                printf("3. right\n");
                scanf(" %d", &hut.position);

                printf("Select the color of the outline:\n");
                printf("1. Red\n");
                printf("2. Green\n");
                printf("3. Blue\n");
                printf("4. Yellow\n");
                printf("5. Default (White)\n");

                printf("Enter your choice (1-5): ");
                scanf(" %d", &hut.outline_color_choice);

                switch (hut.outline_color_choice)
                {
                case 1:
                    hut.outline_color_choice = 31; // Red
                    break;
                case 2:
                    hut.outline_color_choice = 32; // Green
                    break;
                case 3:
                    hut.outline_color_choice = 34; // Blue
                    break;
                case 4:
                    hut.outline_color_choice = 33; // Yellow
                    break;
                case 5:
                default:
                    hut.outline_color_choice = 0; // Default (White)
                }
                hut_function(hut.size, hut.outline_color_choice, hut.character, hut.position);
                char f;
                printf("\nenter 0 to go back to main menu and q to quit\n");
                scanf(" %c", &f);
                if (f == 'q')
                {
                    printf("program has been quitted");
                    exit(0);
                }
                else
                {

                    printf("                      --------------------------------------------------------------\n");
                    printf("                      |                    WELCOME TO MS PAINT                      | \n");
                    printf("                      --------------------------------------------------------------\n");
                    printf("\n                                             OPTIONS\n");
                    printf("                                      enter the 1 for shapes\n");
                    printf("                                 enter the 2 to draw on terminal\n");
                    printf("                                   enter the 3 to save the file\n");
                    printf("                                 enter the 4 to view existig file\n");
                    printf("                                 enter the 5 to edit existig file\n");
                    printf("                                         enter q to quit\n");
                    scanf("%d", &opt.option);
                    continue;
                }
            }

            if (opt.shape == 17)
            {
                void square_interface();
                {
                    struct record squ;
                    int row, col, outlinecolor, fillcolor, position, fill;
                    char symbol;
                    printf("enter symbol with which you want to make the shape \n");
                    scanf(" %c", &squ.symbol);
                    printf("Enter the row:\n ");
                    scanf(" %d", &squ.row);
                    printf("enter 1 for fill or 0 for hollow shape:\n");
                    scanf(" %d", &squ.fill);

                    printf(" enter position where you want to place your shape :\n");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &squ.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &squ.outlinecolor);

                    switch (squ.outlinecolor)
                    {
                    case 1:
                        squ.outlinecolor = 31; // Red
                        break;
                    case 2:
                        squ.outlinecolor = 32; // Green
                        break;
                    case 3:
                        squ.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        squ.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        squ.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &squ.fillcolor);

                    switch (squ.fillcolor)
                    {
                    case 1:
                        squ.fillcolor = 31; // Red
                        break;
                    case 2:
                        squ.fillcolor = 32; // Green
                        break;
                    case 3:
                        squ.fillcolor = 34; // Blue
                        break;
                    case 4:
                        squ.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        squ.fillcolor = 0; // Default (White)
                    }
                    clearscreen();
                    square_function(squ.row, squ.symbol, squ.fill, squ.position, squ.outlinecolor, squ.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 11)
            {
                void numbers_interface(); // definition
                {

                    int size, outlinecolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &size);

                    int position;

                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &outlinecolorChoice);

                    switch (outlinecolorChoice)
                    {
                    case 1:
                        outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        outlinecolorChoice = 0; // Default (White)
                    }

                    int n1, n2;
                    printf("enter frst digit");
                    scanf(" %d", &n1);
                    printf("enter scnd digit");
                    scanf(" %d", &n2);

                    for (int type = n1; type <= n2; type++)
                    {

                        numbers_function(size, symbol, type, position, outlinecolorChoice);
                    }
                }
                char f;
                printf("\nenter 0 to go back to main menu and q to quit\n");
                scanf(" %c", &f);
                if (f == 'q')
                {
                    printf("program has been quitted");
                    exit(0);
                }
                else
                {

                    printf("                      --------------------------------------------------------------\n");
                    printf("                      |                    WELCOME TO MS PAINT                      | \n");
                    printf("                      --------------------------------------------------------------\n");
                    printf("\n                                             OPTIONS\n");
                    printf("                                      enter the 1 for shapes\n");
                    printf("                                 enter the 2 to draw on terminal\n");
                    printf("                                   enter the 3 to save the file\n");
                    printf("                                 enter the 4 to view existig file\n");
                    printf("                                 enter the 5 to edit existig file\n");
                    printf("                                         enter q to quit\n");
                    scanf("%d", &opt.option);
                    continue;
                }
            }

            if (opt.shape == 2)
            {
                void arrows_interface(); // definition
                {
                    struct record arro;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &arro.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &arro.size);
                    int position, fill, type;
                    printf("enter type of the arrow: \n");
                    printf("1. up\n");
                    printf("2. down\n");
                    printf("3. left\n");
                    printf("4. right\n");
                    scanf("%d", &arro.type);
                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &arro.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &arro.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &arro.outlinecolorChoice);

                    switch (arro.outlinecolorChoice)
                    {
                    case 1:
                        arro.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        arro.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        arro.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        arro.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        arro.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &arro.fillcolorChoice);

                    switch (arro.fillcolorChoice)
                    {
                    case 1:
                        arro.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        arro.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        arro.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        arro.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        arro.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    arrows_function(arro.size, arro.fill, arro.type, arro.symbol, arro.position, arro.outlinecolorChoice, arro.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 3)
            {
                void chatbox_interface(); // definition
                {
                    struct record chatb;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &chatb.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &chatb.size);
                    int position, fill;
                    printf("enter type: \n");

                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &chatb.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &chatb.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &chatb.outlinecolorChoice);

                    switch (chatb.outlinecolorChoice)
                    {
                    case 1:
                        chatb.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        chatb.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        chatb.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        chatb.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        chatb.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &chatb.fillcolorChoice);

                    switch (chatb.fillcolorChoice)
                    {
                    case 1:
                        chatb.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        chatb.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        chatb.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        chatb.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        chatb.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();

                    chatbox_function(chatb.size, chatb.fill, chatb.symbol, chatb.position, chatb.outlinecolorChoice, chatb.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 4)
            {
                void circle_interface(); // definition
                {
                    struct record circl;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &circl.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &circl.size);
                    int position, fill;
                    printf("enter type: \n");

                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &circl.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &circl.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &circl.outlinecolorChoice);

                    switch (circl.outlinecolorChoice)
                    {
                    case 1:
                        circl.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        circl.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        circl.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        circl.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        circl.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf("  %d", &circl.fillcolorChoice);

                    switch (circl.fillcolorChoice)
                    {
                    case 1:
                        circl.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        circl.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        circl.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        circl.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        circl.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    circle_function(circl.size, circl.fill, circl.symbol, circl.position, circl.outlinecolorChoice, circl.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 5)
            {
                void diamond_interface(); // definition
                {
                    struct record diam;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &diam.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &diam.size);
                    int position, fill;
                    printf("enter type: \n");

                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &diam.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &diam.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &diam.outlinecolorChoice);

                    switch (diam.outlinecolorChoice)
                    {
                    case 1:
                        diam.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        diam.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        diam.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        diam.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        diam.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &diam.fillcolorChoice);

                    switch (diam.fillcolorChoice)
                    {
                    case 1:
                        diam.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        diam.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        diam.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        diam.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        diam.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    diamond_function(diam.size, diam.fill, diam.symbol, diam.position, diam.outlinecolorChoice, diam.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 2 for shapes\n");
                        printf("                                 enter the 3 to draw on terminal\n");
                        printf("                                   enter the 4 to save the file\n");
                        printf("                                 enter the 5 to view existig file\n");
                        printf("                                 enter the 6 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 7)
            {
                void heart_interface(); // definition
                {
                    struct record heart;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &heart.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &heart.size);
                    int position, fill;
                    printf("enter type: \n");

                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &heart.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &heart.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &heart.outlinecolorChoice);

                    switch (heart.outlinecolorChoice)
                    {
                    case 1:
                        heart.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        heart.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        heart.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        heart.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        heart.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &heart.fillcolorChoice);

                    switch (heart.fillcolorChoice)
                    {
                    case 1:
                        heart.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        heart.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        heart.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        heart.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        heart.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    heart_function(heart.size, heart.fill, heart.symbol, heart.position, heart.outlinecolorChoice, heart.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 8)
            {
                void hexagon_interface();
                {
                    struct record hexa;
                    int size, fill, outlinecolor, fillcolor, position;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &hexa.symbol);
                    printf("enter size:\n");
                    scanf(" %d", &hexa.size);
                    printf("enter 1 for fill or 0 for hollow shape \n");
                    scanf(" %d", &hexa.fill);

                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &hexa.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &hexa.outlinecolor);

                    switch (hexa.outlinecolor)
                    {
                    case 1:
                        hexa.outlinecolor = 31; // Red
                        break;
                    case 2:
                        hexa.outlinecolor = 32; // Green
                        break;
                    case 3:
                        hexa.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        hexa.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        hexa.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf("  %d", &hexa.fillcolor);

                    switch (hexa.fillcolor)
                    {
                    case 1:
                        hexa.fillcolor = 31; // Red
                        break;
                    case 2:
                        hexa.fillcolor = 32; // Green
                        break;
                    case 3:
                        hexa.fillcolor = 34; // Blue
                        break;
                    case 4:
                        hexa.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        hexa.fillcolor = 0; // Default (White)
                    }
                    clearscreen();

                    hexagon_function(hexa.size, hexa.symbol, hexa.fill, hexa.position, hexa.outlinecolor, hexa.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 9)
            {
                void kite_interface(); // definition
                {
                    struct record kite;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &kite.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &kite.size);
                    int position, fill, type;
                    printf("enter type: \n");
                    printf("enter 1 for simple type and 2 for inverted type: \n");
                    scanf(" %d", &kite.type);
                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &kite.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &kite.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &kite.outlinecolorChoice);

                    switch (kite.outlinecolorChoice)
                    {
                    case 1:
                        kite.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        kite.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        kite.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        kite.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        kite.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf("  %d", &kite.fillcolorChoice);

                    switch (kite.fillcolorChoice)
                    {
                    case 1:
                        kite.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        kite.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        kite.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        kite.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        kite.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    kite_function(kite.size, kite.fill, kite.type, kite.symbol, kite.position, kite.outlinecolorChoice, kite.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 10)
            {
                void line_interface();
                {
                    struct record line;
                    int row, color, position, type;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &line.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &line.row);
                    printf(" enter type 1 for horizental and 0 for verticle line:");
                    scanf(" %d", &line.type);
                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :");
                    scanf(" %d", &line.position);

                    printf("Select the color of the square output:\n");
                    printf("1. Red 2. Green,3. Blue,4. Yellow,5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &line.color);

                    switch (line.color)
                    {
                    case 1:
                        line.color = 31; // Red
                        break;
                    case 2:
                        line.color = 32; // Green
                        break;
                    case 3:
                        line.color = 34; // Blue
                        break;
                    case 4:
                        line.color = 33; // Yellow
                        break;
                    case 5:
                    default:
                        line.color = 0; // Default (White)
                    }
                    clearscreen();
                    line_function(line.row, line.symbol, line.type, line.position, line.color);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 12)
            {
                void oval_interface(); // definition
                {
                    struct record oval;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &oval.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &oval.size);
                    int position, fill;
                    printf("enter type: \n");

                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &oval.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &oval.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &oval.outlinecolorChoice);

                    switch (oval.outlinecolorChoice)
                    {
                    case 1:
                        oval.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        oval.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        oval.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        oval.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        oval.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf("  %d", &oval.fillcolorChoice);

                    switch (oval.fillcolorChoice)
                    {
                    case 1:
                        oval.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        oval.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        oval.fillcolorChoice = 33; // blue
                        break;
                    case 4:
                        oval.fillcolorChoice = 34; // yellow
                        break;
                    case 5:
                        oval.fillcolorChoice = 0; // Default (white)
                        break;
                    }
                    clearscreen();
                    oval_function(oval.size, oval.fill, oval.symbol, oval.position, oval.outlinecolorChoice, oval.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 13)
            {
                void paralellogram_interface();
                {
                    struct record paral;
                    int size, fill, outlinecolor, fillcolor, position;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &paral.symbol);
                    printf("enter size:\n");
                    scanf(" %d", &paral.size);
                    printf("enter 1 for fill or 0 for hollow shape \n");
                    scanf(" %d", &paral.fill);

                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &paral.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &paral.outlinecolor);

                    switch (paral.outlinecolor)
                    {
                    case 1:
                        paral.outlinecolor = 31; // Red
                        break;
                    case 2:
                        paral.outlinecolor = 32; // Green
                        break;
                    case 3:
                        paral.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        paral.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        paral.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf("  %d", &paral.fillcolor);

                    switch (paral.fillcolor)
                    {
                    case 1:
                        paral.fillcolor = 31; // Red
                        break;
                    case 2:
                        paral.fillcolor = 32; // Green
                        break;
                    case 3:
                        paral.fillcolor = 34; // Blue
                        break;
                    case 4:
                        paral.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        paral.fillcolor = 0; // Default (White)
                    }
                    clearscreen();
                    paralellogram_function(paral.size, paral.symbol, paral.fill, paral.position, paral.outlinecolor, paral.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 14)
            {
                void pentagon_interface(); // definition
                {
                    struct record penta;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &penta.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &penta.size);
                    int position, fill, type;
                    printf("enter type: \n");
                    printf("enter 1 for simple type and 2 for inverted type: \n");
                    scanf(" %d", &penta.type);
                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &penta.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &penta.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &penta.outlinecolorChoice);

                    switch (penta.outlinecolorChoice)
                    {
                    case 1:
                        penta.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        penta.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        penta.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        penta.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        penta.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &penta.fillcolorChoice);

                    switch (penta.fillcolorChoice)
                    {
                    case 1:
                        penta.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        penta.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        penta.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        penta.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        penta.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    pentagon_function(penta.size, penta.fill, penta.type, penta.symbol, penta.position, penta.outlinecolorChoice, penta.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }

            if (opt.shape == 15)
            {
                void pyramid_interface();
                {
                    struct record pyra;
                    int row, type, fill, outlinecolor, fillcolor, position;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &pyra.symbol);
                    printf("enter size:\n");
                    scanf(" %d", &pyra.row);
                    printf("enter shape type:\n");
                    printf("enter 1 for simple and 2 for inverted");
                    scanf(" %d", &pyra.type);
                    printf("enter 1 for fill or  0 for hollow shape \n");
                    scanf(" %d", &pyra.fill);

                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &pyra.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &pyra.outlinecolor);

                    switch (pyra.outlinecolor)
                    {
                    case 1:
                        pyra.outlinecolor = 31; // Red
                        break;
                    case 2:
                        pyra.outlinecolor = 32; // Green
                        break;
                    case 3:
                        pyra.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        pyra.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        pyra.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf("  %d", &pyra.fillcolor);

                    switch (pyra.fillcolor)
                    {
                    case 1:
                        pyra.fillcolor = 31; // Red
                        break;
                    case 2:
                        pyra.fillcolor = 32; // Green
                        break;
                    case 3:
                        pyra.fillcolor = 34; // Blue
                        break;
                    case 4:
                        pyra.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        pyra.fillcolor = 0; // Default (White)
                    }

                    clearscreen();
                    pyramid_function(pyra.row, pyra.fill, pyra.type, pyra.symbol, pyra.position, pyra.outlinecolor, pyra.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 16)
            {
                void rectangle_interface();
                {
                    struct record recta;
                    int row, col, outlinecolor, fillcolor, position, fill;
                    char symbol;
                    printf("enter symbol with which you want to make the shape \n");
                    scanf(" %c", &recta.symbol);
                    printf("Enter the row:\n ");
                    scanf(" %d", &recta.row);
                    printf(" enter column:\n");
                    scanf(" %d", &recta.col);
                    printf("enter 1 for fill or 0 for hollow shape:\n");
                    scanf(" %d", &recta.fill);

                    printf(" enter position where you want to place your shape :\n");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &recta.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &recta.outlinecolor);

                    switch (recta.outlinecolor)
                    {
                    case 1:
                        recta.outlinecolor = 31; // Red
                        break;
                    case 2:
                        recta.outlinecolor = 32; // Green
                        break;
                    case 3:
                        recta.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        recta.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        recta.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &recta.fillcolor);

                    switch (recta.fillcolor)
                    {
                    case 1:
                        recta.fillcolor = 31; // Red
                        break;
                    case 2:
                        recta.fillcolor = 32; // Green
                        break;
                    case 3:
                        recta.fillcolor = 34; // Blue
                        break;
                    case 4:
                        recta.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        recta.fillcolor = 0; // Default (White)
                    }
                    clearscreen();
                    rectangle_function(recta.row, recta.col, recta.fill, recta.symbol, recta.position, recta.outlinecolor, recta.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 18)
            {
                void stars_interface(); // definition
                {
                    struct record star;
                    int size, outlinecolorChoice, fillcolorChoice;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &star.symbol);
                    printf("Enter the  size: ");
                    scanf(" %d", &star.size);
                    int position, fill, type;
                    printf("enter type: \n");
                    printf("enter 1 for 4 sided star and 2 for six sided star: \n");
                    scanf(" %d", &star.type);
                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &star.fill);
                    printf("Select the position of the output shape:\n");
                    printf("1. left\n");
                    printf("2. middle\n");
                    printf("3. right\n");
                    scanf(" %d", &star.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &star.outlinecolorChoice);

                    switch (star.outlinecolorChoice)
                    {
                    case 1:
                        star.outlinecolorChoice = 31; // Red
                        break;
                    case 2:
                        star.outlinecolorChoice = 32; // Green
                        break;
                    case 3:
                        star.outlinecolorChoice = 34; // Blue
                        break;
                    case 4:
                        star.outlinecolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        star.outlinecolorChoice = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red\n");
                    printf("2. Green\n");
                    printf("3. Blue\n");
                    printf("4. Yellow\n");
                    printf("5. Default (White)\n");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &star.fillcolorChoice);

                    switch (star.fillcolorChoice)
                    {
                    case 1:
                        star.fillcolorChoice = 31; // Red
                        break;
                    case 2:
                        star.fillcolorChoice = 32; // Green
                        break;
                    case 3:
                        star.fillcolorChoice = 34; // Blue
                        break;
                    case 4:
                        star.fillcolorChoice = 33; // Yellow
                        break;
                    case 5:
                    default:
                        star.fillcolorChoice = 0; // Default (White)
                    }
                    clearscreen();
                    stars_function(star.size, star.fill, star.type, star.symbol, star.position, star.outlinecolorChoice, star.fillcolorChoice);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 19)
            {
                void triangle_interface();
                {
                    struct record tria;
                    int size, fill, outlinecolor, fillcolor, position, type;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &tria.symbol);
                    printf("enter size:\n");
                    scanf(" %d", &tria.size);
                    printf("enter type: \n");
                    printf("enter 1 for simple type and 2 for inverted type: \n");
                    scanf(" %d", &tria.type);
                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &tria.fill);

                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &tria.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &tria.outlinecolor);

                    switch (tria.outlinecolor)
                    {
                    case 1:
                        tria.outlinecolor = 31; // Red
                        break;
                    case 2:
                        tria.outlinecolor = 32; // Green
                        break;
                    case 3:
                        tria.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        tria.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        tria.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &tria.fillcolor);

                    switch (tria.fillcolor)
                    {
                    case 1:
                        tria.fillcolor = 31; // Red
                        break;
                    case 2:
                        tria.fillcolor = 32; // Green
                        break;
                    case 3:
                        tria.fillcolor = 34; // Blue
                        break;
                    case 4:
                        tria.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        tria.fillcolor = 0; // Default (White)
                    }
                    clearscreen();
                    triangle_function(tria.size, tria.symbol, tria.type, tria.fill, tria.position, tria.outlinecolor, tria.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 20)
            {
                void tripozium_interface();
                {
                    struct record tripo;
                    int size, type, fill, outlinecolor, fillcolor, position;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &tripo.symbol);
                    printf("enter size:\n");
                    scanf(" %d", &tripo.size);
                    printf("enter shape type:\n");
                    printf("enter 1 for simple and 2 for inverted");
                    scanf(" %d", &tripo.type);
                    printf("enter 1 for fill or 0 for hollow shape \n");
                    scanf(" %d", &tripo.fill);

                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &tripo.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &tripo.outlinecolor);

                    switch (tripo.outlinecolor)
                    {
                    case 1:
                        tripo.outlinecolor = 31; // Red
                        break;
                    case 2:
                        tripo.outlinecolor = 32; // Green
                        break;
                    case 3:
                        tripo.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        tripo.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        tripo.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &tripo.fillcolor);

                    switch (tripo.fillcolor)
                    {
                    case 1:
                        tripo.fillcolor = 31; // Red
                        break;
                    case 2:
                        tripo.fillcolor = 32; // Green
                        break;
                    case 3:
                        tripo.fillcolor = 34; // Blue
                        break;
                    case 4:
                        tripo.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        tripo.fillcolor = 0; // Default (White)
                    }
                    clearscreen();
                    tripozium_function(tripo.size, tripo.symbol, tripo.type, tripo.fill, tripo.position, tripo.outlinecolor, tripo.fillcolor);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
            if (opt.shape == 21)
            {
                void tree_interface();
                {
                    struct record tree;
                    int n, fill, outlinecolor, fillcolor, position, type;
                    char symbol;
                    printf("enter symbol with which you want to make the shape");
                    scanf(" %c", &tree.symbol);
                    printf("enter size:\n");
                    scanf(" %d", &tree.n);
                    printf("enter type: \n");

                    printf("press 1 for filled shape and 0 for hollow shape\n");
                    scanf(" %d", &tree.fill);

                    printf(" enter position where you want to place your shape :");
                    printf("press 1 for left , 2 for right , 3 for middle :\n");
                    scanf(" %d", &tree.position);

                    printf("Select the color of the outline:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &tree.outlinecolor);

                    switch (tree.outlinecolor)
                    {
                    case 1:
                        tree.outlinecolor = 31; // Red
                        break;
                    case 2:
                        tree.outlinecolor = 32; // Green
                        break;
                    case 3:
                        tree.outlinecolor = 34; // Blue
                        break;
                    case 4:
                        tree.outlinecolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        tree.outlinecolor = 0; // Default (White)
                    }
                    printf("Select the color of the fill:\n");
                    printf("1. Red , 2. Green , 3. Blue , 4. Yellow , 5. Default (White)");

                    printf("Enter your choice (1-5): ");
                    scanf(" %d", &tree.fillcolor);

                    switch (tree.fillcolor)
                    {
                    case 1:
                        tree.fillcolor = 31; // Red
                        break;
                    case 2:
                        tree.fillcolor = 32; // Green
                        break;
                    case 3:
                        tree.fillcolor = 34; // Blue
                        break;
                    case 4:
                        tree.fillcolor = 33; // Yellow
                        break;
                    case 5:
                    default:
                        tree.fillcolor = 0; // Default (White)
                    }
                    clearscreen();
                    tree_function(tree.fill, tree.symbol, tree.position, tree.outlinecolor, tree.fillcolor, tree.n);
                    char f;
                    printf("\nenter 0 to go back to main menu and q to quit\n");
                    scanf(" %c", &f);
                    if (f == 'q')
                    {
                        printf("program has been quitted");
                        exit(0);
                    }
                    else
                    {

                        printf("                      --------------------------------------------------------------\n");
                        printf("                      |                    WELCOME TO MS PAINT                      | \n");
                        printf("                      --------------------------------------------------------------\n");
                        printf("\n                                             OPTIONS\n");
                        printf("                                      enter the 1 for shapes\n");
                        printf("                                 enter the 2 to draw on terminal\n");
                        printf("                                   enter the 3 to save the file\n");
                        printf("                                 enter the 4 to view existig file\n");
                        printf("                                 enter the 5 to edit existig file\n");
                        printf("                                         enter q to quit\n");
                        scanf("%d", &opt.option);
                        continue;
                    }
                }
            }
        }

        else if (opt.option == 3)
        {
            char filename[400], filepath[400];
            char folderpath[400] = "C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\";

            printf("DEAR USER! enter name of .txt file in order to save your shape(format: filename.txt):\n ");
            scanf("%99s", filename);
            snprintf(filepath, sizeof(filepath), "%s%s", folderpath, filename);
            FILE *m = fopen("C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\mal.txt", "r");
            if (m == NULL)
            {
                printf("error opening the file");
            }
            char data[1000];

            FILE *save = fopen(filepath, "w");
            if (save == NULL)
            {
                printf("file couldn't be opened!\n");
            }
            while (fgets(data, 1000, m))
            {
                fprintf(save, "%s", data);
            }
            printf("file saving accomplished!\n");
            fclose(save);
            char f;
            printf("\nenter 0 to go back to main menu and q to quit\n");
            scanf(" %c", &f);
            if (f == 'q')
            {
                printf("program has been quitted");
                exit(0);
            }
            else
            {

                printf("                      --------------------------------------------------------------\n");
                printf("                      |                    WELCOME TO MS PAINT                      | \n");
                printf("                      --------------------------------------------------------------\n");
                printf("\n                                             OPTIONS\n");
                printf("                                      enter the 1 for shapes\n");
                printf("                                 enter the 2 to draw on terminal\n");
                printf("                                   enter the 3 to save the file\n");
                printf("                                 enter the 4 to view existig file\n");
                printf("                                 enter the 5 to edit existig file\n");
                printf("                                         enter q to quit\n");
                scanf("%d", &opt.option);
                continue;
            }
        }
        else if (opt.option == 4)
        {
            char filename[400], filepath[400];
            char folderpath[400] = "C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\";
            printf("DEAR USER! enter name of .txt file containing the content you need to view(format: filename.txt):\n ");
            scanf("%99s", filename);
            snprintf(filepath, sizeof(filepath), "%s%s", folderpath, filename);
            FILE *open = fopen(filepath, "r");
            if (open == NULL)
            {
                printf("enter a valid name of your file\n");
            }
            char data[3000];
            while (fgets(data, 3000, open))
            {
                printf("%s", data);
            }
            fclose(open);
            char f;
            printf("\nenter 0 to go back to main menu and q to quit\n");
            scanf(" %c", &f);
            if (f == 'q')
            {
                printf("program has been quitted");
                exit(0);
            }
            else
            {

                printf("                      --------------------------------------------------------------\n");
                printf("                      |                    WELCOME TO MS PAINT                      | \n");
                printf("                      --------------------------------------------------------------\n");
                printf("\n                                             OPTIONS\n");
                printf("                                      enter the 1 for shapes\n");
                printf("                                 enter the 2 to draw on terminal\n");
                printf("                                   enter the 3 to save the file\n");
                printf("                                 enter the 4 to view existig file\n");
                printf("                                 enter the 5 to edit existig file\n");
                printf("                                         enter q to quit\n");
                scanf("%d", &opt.option);
                continue;
            }
        }

        else if (opt.option == 5)
        {
            printf("if you want to enter data to end of your file then press 1 and if you want to replace the existing data then press 2\n");
            scanf("%d", &options);
            if (options == 1)
            {
                char filename[400], filepath[400];
                char folderpath[400] = "C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\";

                printf("DEAR USER! enter name of .txt file containing the content you need to edit(format: filename.txt):\n ");
                scanf("%99s", filename);
                snprintf(filepath, sizeof(filepath), "%s%s", folderpath, filename);
                if (!filepresent(filepath))
                {
                    printf("file doesn't exist\n");
                }
                FILE *edit = fopen(filepath, "a");
                if (edit == NULL)
                {
                    printf("enter a valid file name\n");
                }
                char data[2000];
                printf("\nenter data for appnding in file\n");
                scanf("%s", data);
                fprintf(edit, "%s", data);
                fclose(edit);
                printf("data entered to file successfully!\n");
            }
            else if (options == 2)
            {
                char filename[400], filepath[400];
                char folderpath[400] = "C:\\Users\\Muhammad Saad\\Desktop\\MALAIKA GROUP-PF PROJECT\\temp\\";
                printf("DEAR USER! enter name of .txt file  containing the content you need to edit(format: filename.txt):\n ");
                scanf("%99s", filename);
                snprintf(filepath, sizeof(filepath), "%s%s", folderpath, filename);
                if (!filepresent(filepath))
                {
                    printf("file doesn't exist\n");
                }
                FILE *write = fopen(filepath, "w");
                if (write == NULL)
                {
                    printf("enter a valid file name\n");
                }
                char data[2000];
                printf("\nenter data you need to write  in file\n");
                scanf("%s", data);
                fprintf(write, "%s", data);
                fclose(write);
                printf("data written in file successfully!\n");
            }
            char f;
            printf("\nenter 0 to go back to main menu and q to quit\n");
            scanf(" %c", &f);
            if (f == 'q')
            {
                printf("program has been quitted");
                exit(0);
            }
            else
            {

                printf("                      --------------------------------------------------------------\n");
                printf("                      |                    WELCOME TO MS PAINT                      | \n");
                printf("                      --------------------------------------------------------------\n");
                printf("\n                                             OPTIONS\n");
                printf("                                      enter the 1 for shapes\n");
                printf("                                 enter the 2 to draw on terminal\n");
                printf("                                   enter the 3 to save the file\n");
                printf("                                 enter the 4 to view existig file\n");
                printf("                                 enter the 5 to edit existig file\n");
                printf("                                         enter q to quit\n");
                scanf("%d", &opt.option);
                continue;
            }
        }
        else
        {
            char f;
            printf(" please opt for a valid choice\n");
            printf("enter 0 to go back to main menu and q to quit\n");
            scanf(" %c", &f);
            if (f == 'q')
            {
                printf("program has been quitted");
                exit(0);
            }
            else
            {

                printf("                      --------------------------------------------------------------\n");
                printf("                      |                    WELCOME TO MS PAINT                      | \n");
                printf("                      --------------------------------------------------------------\n");
                printf("\n                                             OPTIONS\n");
                printf("                                      enter the 1 for shapes\n");
                printf("                                 enter the 2 to draw on terminal\n");
                printf("                                   enter the 3 to save the file\n");
                printf("                                 enter the 4 to view existig file\n");
                printf("                                 enter the 5 to edit existig file\n");
                printf("                                         enter q to quit\n");
                scanf("%d", &opt.option);
                continue;
            }
        }
    }
}