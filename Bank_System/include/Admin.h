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
    // Methods :
    void addEmployee(Employee& employee)
    {
        allEmployees.push_back (employee) ;
    }
    void listEmployee()
    {
        cout << "All Employees : " << endl ;
        for (employee_It=allEmployees.begin() ; employee_It != allEmployees.begin() ; employee_It++ )
        {
            employee_It->display();
        }
    }
    bool searchEmployee(int id)
    {
        for (employee_It=allEmployees.begin() ; employee_It != allEmployees.begin() ; employee_It++ )
        {
            if(employee_It->getId() == id)
                return true ;
        }
        return false ;
    }
    void editEmployee(int id, string name, int age , string gender ,
                      string password , double salary)
    {
        if(!(searchEmployee(id) == false))
        {
            Employee *e ;
            e->setName(name);
            e->setAge(age);
            e->setGender(gender);
            e->setPassword(password);
            e->setSalary(salary);
        }
        else
            cout << "Sorry , This Employee is not exist ." << endl ;
    }
    void listClientAndEmployee()
    {
        cout << "All Clients : " << endl ;
        for (client_It=allClients.begin() ; client_It != allClients.begin() ; client_It++ )
        {
            client_It->display();
        }
        cout << "All Employees : " << endl ;
        for (employee_It=allEmployees.begin() ; employee_It != allEmployees.begin() ; employee_It++ )
        {
            employee_It->display();
        }
    }
    // Destructor :
    ~Admin ()
    {

    }
};

static vector<Admin> allAdmins ;
static vector<Admin>::iterator admins_It ;

#endif // ADMIN_H
