#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
    private:
        T input1;
        T input2;
        T prod;
    public:
        Multiplier(T input1In, T input2In);
        void setProduct();
        void print();
};

template <class T>
Multiplier<T>::Multiplier(T input1In, T input2In)
{
    input1 = input1In;
    input2 = input2In;

}

template <class T>
void Multiplier<T>::setProduct()
{
    prod = input1 * input2;
}

template <class T>
void Multiplier<T>::print()
{
    cout << prod << endl;
}

int main()
{
    Multiplier<int> mi(5,7);
    mi.setProduct();
    mi.print();

    Multiplier<float> mf(5.6, 9.0);
    mf.setProduct();
    mf.print();
}