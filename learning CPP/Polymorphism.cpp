//Virtual Functions

#include <iostream>

using namespace std;

class Employee
{
    private:
        float payRate;
        int EmployeeId;
        string name;
    public:
        void setPay(float payRateIn);
        float getPay();
        //creating a virtual function
        virtual float calcWeeklyPay();
};

void Employee::setPay(float payRateIn)
{
    payRate = payRateIn;
}

float Employee::getPay()
{
    return payRate;
}

float Employee::calcWeeklyPay()
{
    return 40 * payRate;
}

class Manager : public Employee
{
    public:
        float calcWeeklyPay();
};

float Manager::calcWeeklyPay()
{
    return Employee::getPay() / 52;
}

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    
    //assign an manager to e1
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  
    
    e1->setPay(12000.00);

    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    
    //assign an employee to e2
    level = "hourly";
    Employee *e2; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e2 = new Employee(); //we define an hourly employee
    }
    else
    {
        e2 = new Manager(); //we define a salaried employee
    }  
    
    e2->setPay(10.00);
    cout<<"\ne2 pay: $"<<e2->calcWeeklyPay();
    
    return 0;
}