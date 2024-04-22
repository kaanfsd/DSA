#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void func(struct Rectangle *p) 
{
    p->length = 20;
    cout<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth<<endl;
}

int main() 
{
    struct Rectangle r = {10,5};
    func(&r);

    printf("Length %d \nBreadth %d\n", r.length, r.breadth);
}