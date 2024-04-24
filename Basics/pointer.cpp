#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("p value is %d\n",p);
    printf("a value is %d\n", *p);
    printf("a address is %d\n", p);

    int A[5] = {0,2,4,6,8};
    int *p2;
    /* Instead of p=A we can use p=&A[0]. */
    p2=A;
    //p2=&A[0];

    for(int i = 0; i<5; i++)
    /* Instead of A[i] we can use p2[i]. */
    cout<<A[i]<<endl;
    
    int *p3;
    /* Malloc function allows us to allocate memory from heap. */
    /* We could declare p3 = new int[5] instead of below code.*/
    p3 = (int *)malloc(5*sizeof(int));
    //p3 = new int[5];
    p3[0] = 1; p3[1] = 2; p3[2] = 3; p3[3] = 4; p3[4] = 5;

    for(int i = 0; i < 5; i++)
    cout<<p3[i]<<endl;

    /* If you are using dynamic memory allocation you should
     delete the memory that you are using*/
    //delete [ ] p3;

}