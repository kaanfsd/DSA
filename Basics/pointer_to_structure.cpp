#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main() 
{
    Rectangle *p;
    // C Version
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); 

    // C++ Version
    p = new Rectangle;

    p->length = 15;
    p->breadth = 10;


    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}