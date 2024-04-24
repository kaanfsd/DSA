#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// We can use * A instead of A[ ] . 
// void func(int A[ ], int n) {
//     for(int i=0; i<n;i++)
//     cout<<A[i]<<endl;
// }

// int main() {
//     int A[] = {2,4,6,8,10};
//     int n = 5;

//     func(A, n);
//     for(int x:A)
//     cout<<x<<endl;
// }

int * func(int size){
    int *p;
    p = new int[size];

    for (int i = 0; i < size; i++)
    p[i] = i + 1;
    
    return p;
}

int main() {
    int *ptr, size=5;
    ptr = func(size);

    for (int i = 0; i < size; i++)
    cout<<ptr[i]<<endl;   
}