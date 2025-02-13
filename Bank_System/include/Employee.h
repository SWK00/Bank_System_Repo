#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person
{
protected :
    // Attributes :
    double salary ;
public :
    // Default Constructor :
    Employee () : Person ()
    {
        this->salary = 0 ;
    }
    // Parameterized Constructor :
    Employee (int id , string name , int age , string gender , string password , double salary)
             : Person (id , name , age , gender , password)
    {
        setSalary (salary) ;
    }
    // Setters :
    void setSalary (double salary)
    {
        bool check6 = Validation::validationSalary(salary) ;
        if (check6 == true)
        {
            this->salary = salary ;
        }
        else
        {
            cout << "Sorry , This salary is not validation ." << endl ;
        }
    }
    // Getters :
    double getSalary ()
    {
        return this->salary ;
    }
    // Methods :
    void display ()
    {
        Person::display() ;
        cout << "Salary is    : " << this->salary << endl ;
    }
    // Destructor :
    ~Employee ()
    {

    }
};

#endif // EMPLOYEE_H
