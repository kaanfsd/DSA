#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    int a = 10;
    int &r = a;
    r = 25;

    int b = 30;
    r=b;
    
    cout<<a<<endl<<r<<endl;
}