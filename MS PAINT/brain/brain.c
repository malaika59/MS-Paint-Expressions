#include "brain_header.h"

void pyramid_function(int row, int fill_input, int type_input, char symbol, int position, int outlinecolor, int fillcolor)
{
    if (type_input == 1)
    {
        if (fill_input == 1)
        {
            pyramid(symbol, row, position, outlinecolor, fillcolor);
        }
        else
        {

            hollow_pyramid(symbol, row, position, outlinecolor, fillcolor);
        }
    }
    else if (type_input == 2)
    {
        if (fill_input == 2)
        {
            invertpyramid(symbol, row, position, outlinecolor, fillcolor);
        }
        else
        {
            hollowinvertpyramid(symbol, row, position, outlinecolor);
        }
    }
}

void rectangle_function(int row, int col, int fill_input, char symbol, int position, int outlinecolor, int fillcolor)
{
    if (fill_input == 1)
    {
        rectangle(row, col, symbol, position, outlinecolor, fillcolor);
    }
    else
    {
        hollow_rectangle(row, col, symbol, position, outlinecolor);
    }
}

void line_function(int row, char symbol, int type_input, int position, int color)
{
    if (type_input == 1)
    {
        horizental_line(row, symbol, position, color);
    }
    else
    {
        verticle_line(row, symbol, position, color);
    }
}

void square_function(int row, char symbol, int fill_input, int position, int outlinecolor, int fillcolor)
{
    if (fill_input == 1)
    {
        square(row, symbol, position, outlinecolor, fillcolor);
    }
    else
    {

        hollow_square(row, symbol, position, outlinecolor);
    }
}

void alphabet_function(int size, char symbol, char i, int color, int position)
{

    if (i == 'a')
    {
        print_A(size, symbol, position, color);
    }
    else if (i == 'b')
    {
        print_B(size, symbol, position, color);
    }
    else if (i == 'c')
    {
        print_C(size, symbol, position, color);
    }
    else if (i == 'd')
    {
        print_D(size, symbol, position, color);
    }
    else if (i == 'e')
    {
        print_E(size, symbol, position, color);
    }
    else if (i == 'f')
    {
        print_F(size, symbol, position, color);
    }
    else if (i == 'g')
    {
        print_G(size, symbol, position, color);
    }
    else if (i == 'h')
    {
        print_H(size, symbol, position, color);
    }
    else if (i == 'i')
    {
        print_I(size, symbol, position, color);
    }
    else if (i == 'j')
    {
        print_J(size, symbol, position, color);
    }
    else if (i == 'k')
    {
        print_K(size, symbol, position, color);
    }
    else if (i == 'l')
    {
        print_L(size, symbol, position, color);
    }
    else if (i == 'm')
    {
        print_M(size, symbol, position, color);
    }
    else if (i == 'n')
    {
        print_N(size, symbol, position, color);
    }
    else if (i == 'o')
    {
        print_O(size, symbol, position, color);
    }
    else if (i == 'p')
    {
        print_P(size, symbol, position, color);
    }
    else if (i == 'q')
    {
        print_Q(size, symbol, position, color);
    }
    else if (i == 'r')
    {
        print_R(size, symbol, position, color);
    }
    else if (i == 's')
    {
        print_S(size, symbol, position, color);
    }
    else if (i == 't')
    {
        print_T(size, symbol, position, color);
    }
    else if (i == 'u')
    {
        print_U(size, symbol, position, color);
    }
    else if (i == 'v')
    {
        print_V(size, symbol, position, color);
    }
    else if (i == 'w')
    {
        print_W(size, symbol, position, color);
    }
    else if (i == 'x')
    {
        print_X(size, symbol, position, color);
    }
    else if (i == 'y')
    {
        print_Y(size, symbol, position, color);
    }
    else if (i == 'z')
    {
        print_Z(size, symbol, position, color);
    }
}

void tripozium_function(int size, char symbol, int type_input, int fill_input, int position, int outlinecolor, int fillcolor)
{
    if (type_input == 1)
    {
        if (fill_input == 1)
        {
            simple_tripozium(size, symbol, position, outlinecolor, fillcolor);
        }
        else
        {
            hollow_tripozium(size, symbol, position, outlinecolor);
        }
    }
    else if (type_input == 2)
    {
        if (fill_input == 2)
        {
            invert_tripozium(size, symbol, position, outlinecolor, fillcolor);
        }
        else
        {
            hollow_invert_tripozium(size, symbol, position, outlinecolor);
        }
    }
}

void paralellogram_function(int size, char symbol, int fill_input, int position, int outlinecolor, int fillcolor)
{
    if (fill_input == 1)
    {
        paralllogram(size, symbol, position, outlinecolor, fillcolor);
    }
    else
    {
        hollow_paralllogram(size, symbol, position, outlinecolor);
    }
}

void hexagon_function(int size, char symbol, int fill_input, int position, int outlinecolor, int fillcolor)
{
    if (fill_input == 1)
    {
        hexagon(size, symbol, position, outlinecolor, fillcolor);
    }
    else
    {
        hollow_hexagon(size, symbol, position, outlinecolor);
    }
}

void triangle_function(int size, char symbol, int type_input, int fill_input, int position, int outlinecolor, int fillcolor)
{
    if (type_input == 1)
    {
        if (fill_input == 1)
        {

            triangle(size, symbol, position, outlinecolor, fillcolor);
        }
        else
        {
            hollow_triangle(size, symbol, position, outlinecolor);
        }
    }
    else if (type_input == 2)
    {
        if (fill_input == 2)
        {

            right_triangle(size, symbol, position, outlinecolor, fillcolor);
        }
        else
        {
            hollow_right_triangle(size, symbol, position, outlinecolor);
        }
    }
    else if (type_input == 3)
    {
        if (fill_input == 3)
        {

            invert_triangle(size, symbol, position, outlinecolor, fillcolor);
        }
        else
        {
            hollow_invert_triangle(size, symbol, position, outlinecolor);
        }
    }
    else if (type_input == 4)
    {
        if (fill_input == 4)
        {

            right_invert_triangle(size, symbol, position, outlinecolor, fillcolor);
        }
        else
        {
            hollow_right_invert_triangle(size, symbol, position, outlinecolor);
        }
    }
}
void pentagon_function(int size, int fill_input, int type_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{
    if (type_input == 1)
    {
        if (fill_input == 1)
        {
            pentagon(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {

            hollowpentagon(size, outlinecolorChoice, symbol, position);
        }
    }
    else if (type_input == 2)
    {
        if (fill_input == 1)
        {
            invertedpentagon(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {
            hollowinvertedpentagon(size, outlinecolorChoice, symbol, position);
        }
    }
}
// arrows
void arrows_function(int size, int fill_input, int type_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{
    if (type_input == 1) // up
    {
        if (fill_input == 1)
        {
            uparrow(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {

            uparrowhollow(size, outlinecolorChoice, symbol, position);
        }
    }
    else if (type_input == 2) // down
    {
        if (fill_input == 1)
        {
            downarrow(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {
            downarrowhollow(size, outlinecolorChoice, symbol, position);
        }
    }
    else if (type_input == 3) // left
    {
        if (fill_input == 1)
        {
            leftarrow(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {
            leftarrowhollow(size, outlinecolorChoice, symbol, position);
        }
    }
    else if (type_input == 4) // right
    {
        if (fill_input == 1)
        {
            rightarrow(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {
            rightarrowhollow(size, outlinecolorChoice, symbol, position);
        }
    }
}
/////stars
void stars_function(int size, int fill_input, int type_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{
    if (type_input == 1) // fourside
    {
        if (fill_input == 1)
        {
            fourstar(size, fillcolorChoice, outlinecolorChoice, symbol, position);
        }
        else
        {

            fourstarhollow(size, outlinecolorChoice, symbol, position);
        }
    }
    else if (type_input == 2) // sixside
    {
        if (fill_input == 1)
        {
            sixstar(size, fillcolorChoice, outlinecolorChoice, symbol, position);
        }
        else
        {
            sixstarhollow(size, outlinecolorChoice, symbol, position);
        }
    }
}
/// circle
void circle_function(int size, int fill_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{

    if (fill_input == 1)
    {
        circle(size, outlinecolorChoice, fillcolorChoice, symbol, position);
    }
    else
    {

        hollowcircle(size, outlinecolorChoice, symbol, position);
    }
}
/// chatbox
void chatbox_function(int size, int fill_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{

    if (fill_input == 1)
    {
        chatbox(size, outlinecolorChoice, fillcolorChoice, symbol, position);
    }
    else
    {

        hollowchatbox(size, outlinecolorChoice, symbol, position);
    }
}
/// heart
void heart_function(int size, int fill_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{

    if (fill_input == 1)
    {
        heart(size, outlinecolorChoice, fillcolorChoice, symbol, position);
    }
    else
    {

        hollowheart(size, outlinecolorChoice, symbol, position);
    }
}
/// diamond
void diamond_function(int size, int fill_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{

    if (fill_input == 1)
    {
        diamond(size, outlinecolorChoice, fillcolorChoice, symbol, position);
    }
    else
    {

        hollowdiamond(size, outlinecolorChoice, symbol, position);
    }
}

///////////////////kite
void kite_function(int size, int fill_input, int type_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{
    if (type_input == 1)
    {
        if (fill_input == 1)
        {
            kite(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {

            hollowkite(size, outlinecolorChoice, symbol, position);
        }
    }
    else if (type_input == 2)
    {
        if (fill_input == 1)
        {
            invertedkite(size, outlinecolorChoice, fillcolorChoice, symbol, position);
        }
        else
        {
            invertedhollowkite(size, outlinecolorChoice, symbol, position);
        }
    }
}
//////////////////numbers////////////////
void numbers_function(int size, char symbol, int type, int position, int outlinecolorChoice)
{

    if (type == 1)
    {
        one(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 2)
    {
        two(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 3)
    {
        three(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 4)
    {
        four(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 5)
    {
        five(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 6)
    {
        six(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 7)
    {
        seven(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 8)
    {
        eight(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 9)
    {
        nine(size, outlinecolorChoice, symbol, position);
    }
    else if (type == 0)
    {
        zero(size, outlinecolorChoice, symbol, position);
    }
}

//////oval/////////

void oval_function(int size, int fill_input, char symbol, int position, int outlinecolorChoice, int fillcolorChoice)
{

    if (fill_input == 1)
    {
        oval(size, outlinecolorChoice, fillcolorChoice, symbol, position);
    }
    else
    {

        hollowoval(size, outlinecolorChoice, symbol, position);
    }
}

void freehand_function(int x, int y)
{
    location(x, y);
}
void hut_function(int size, int outline_color_choice, char character, int position)
{
    filled_hut(size, outline_color_choice, character, position);
}
///treeeeeeeeeeee
void tree_function( int fill_input, char symbol, int position, int outlinecolor, int fillcolor,int n)
{

    if (fill_input == 1)
    {
       tree( symbol, position, outlinecolor, fillcolor, n);
    }
    else
    {

        hollow_tree( symbol, position, outlinecolor, fillcolor, n);
    }
}