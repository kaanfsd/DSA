#include <stdio.h>
#include <iostream>

using namespace std;

/* You can declare a instance of a struct after 
adding variable name to the end of struct declaration. */
struct Rectangle
{
    int length;
    int breadth;
    char x;
} rect3;

/* Also you can declare out of the main function 
and it becomes a global variable. */ 
struct Rectangle rect2;

int main() 
{
    struct Rectangle rect1 = {10,5};
    
    rect1.length = 7;
    rect1.breadth = 10;
    
    cout<<rect1.length<<endl;
    cout<<rect1.breadth<<endl;
}
