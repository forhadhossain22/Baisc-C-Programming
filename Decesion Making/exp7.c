#include<stdio.h>
int main()
 {
    //Declaring a variable val1 and initializing it with a value 5
    int val1=3;
    //Declaring a variable val2 and initializing it with a value 3
    int val2=3;
    if(val1==5)
    {
    //This block will be executed only if "val1" is equal to 5
    if(val2==3)
    {
    /*This block will be executed only if
    val1 is equal to 5 and val2 is equal to 3 */
    printf("Hi, val1 is 5 and val2 is 3");
    }
    else
    {
    /*This block will be executed only if
    val1 is equal to 5 and test2 is some value other than 3 */
    printf("Hi, val1 is 5 and val2 is some value other than 3");
    }
    }
    else if(val1==4)
    {
    //This block will be executed only if test1 is 4
    printf("Hi, val1 is 4");
    }
    else if(val1==3)
    {
    //This block will be executed only if "val1" is 3
    if(val2==3)
    {
    /*This block will be executed only if
    val1 is equal to 3 and val2 is equal to 3 */
    printf("Hi, val1 is 3 and val2 is 3");
    }
    else if(val2==2)
    {
    /*This block will be executed only if
    val1 is equal to 3 and val2 is equal to 2 */
    printf("Hi, val1 is 3 and val2 is 2");
    }
    }
    else
    {
    /*This block will be executed only if
    val1 is some value other than 5,4,3*/
    printf("Hi, val1 is some value other than 5,4,3");
    }
 }
