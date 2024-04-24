#include<iostream>

using namespace std;

int main(){
    int arraySize;
    cout<<"Array size: ";
    cin>>arraySize;

    int A[arraySize];
    A[0] = 2;

    for(int x:A) {
        cout<<x<<endl;
    }
}