#include <iostream>
#include <stdlib.h>

using namespace std;

/* In this given parameter passing method we are naming num1 as x and num2 as y
x and y is also num1 and num2. */
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 10, num2 = 15;
    swap(num1, num2);
    cout<<"First number "<<num1<<endl;
    cout<<"Second number "<<num2<<endl;
}
