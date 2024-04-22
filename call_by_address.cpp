#include <iostream>
#include <stdlib.h>

using namespace std;

/* In this given parameter passing method pass address of the variable
and below swap function changes values by accessing the their values
with using pointers. */
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1 = 10, num2 = 15;
    swap(&num1, &num2);
    cout<<"First number "<<num1<<endl;
    cout<<"Second number "<<num2<<endl;
}
