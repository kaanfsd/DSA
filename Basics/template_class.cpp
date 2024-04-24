#include <iostream>

using namespace std;

template<class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};
    template<class T>
    Arithmetic<T>::Arithmetic(T a, T b)
    {
        this->a=a;
        this->b=b;
    }
    template<class T>
    T Arithmetic<T>::add()
    {
        T c;
        c = a + b;
        return c;
    }
    template<class T>
    T Arithmetic<T>::sub()
    {
        T c;
        c = a - b;
        return c;
    }

int main()
{
    Arithmetic<float> ar(10.44,5.56), ar2(15.23,7.53);

    cout<<"Add "<<ar.add()<<endl;
    cout<<"Sub "<<ar.sub()<<endl;
    
    cout<<"Add "<<ar2.add()<<endl;
    cout<<"Sub "<<ar2.sub()<<endl;
    
}