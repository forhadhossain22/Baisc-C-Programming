#include<stdio.h>
int main()
{
    /* Condition is not working, because char */
    char color[10] = "purple";
    if (color=="purple")
    {
    printf("Purple conveys royalty, nobility & wisdom.");
    }
    else if (color=="orange")
    {
    printf("Orange conveys energy, warmth & flamboyancy.");
    }
    else if (color=="blue")
    {
    printf("Blue conveys peace, tranquility & security.");
    }
    else
    {
    printf("I dunno what that color conveys, sorry.");
    }
return 0;
}
