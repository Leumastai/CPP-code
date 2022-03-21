#include <iostream>
using namespace std;
//Note you can decide if yo want some variables to take various datatype or a single one

template <class T>
class StudentRecord
{
    private:
        T grade; //multiple datatype
        const int size = 5;
        int studentId;

    public:
        StudentRecord (T input);
        void setId(int Idin); //single datatype
        void print(); 
};

template <class T> 
StudentRecord<T>::StudentRecord (T input)
{
    grade = input;
}

template <class T>
void StudentRecord<T>::setId(int Idin) //necerssary because its a template class
{
    studentId = Idin;
}

template <class T>
void StudentRecord<T>::print()
{
    cout << "Student ID: " <<studentId << '\n';
    cout <<"Result: " << grade <<endl;
}


int main()
{

    StudentRecord<float> Sr(45.67);
    Sr.setId(78353);
    Sr.print();

}