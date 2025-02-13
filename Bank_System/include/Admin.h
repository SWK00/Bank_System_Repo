#ifndef ADMIN_H
#define ADMIN_H

#include "Employee.h"

class Admin : public Employee
{
public :
    // Default Constructor :
    Admin () : Employee ()
    {

    }
    // Parameterized Constructor :
    Admin (int id , string name , int age , string gender , string password , double salary)
             : Employee (id , name , age , gender , password , salary)
    {

    }
    // Destructor :
    ~Admin ()
    {

    }
};

#endif // ADMIN_H
