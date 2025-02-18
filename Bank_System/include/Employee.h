#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Client.h"

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
        cout << "===========================" << endl ;
    }
    void addClient(Client &c)
    {
        allClients.push_back(c) ;
    }
    void listClient()
    {
        cout << "All Clients : " << endl ;
        for (client_It=allClients.begin() ; client_It != allClients.begin() ; client_It++ )
        {
            client_It->display();
        }
    }
    bool searchClient(int id)
    {
        for (client_It=allClients.begin() ; client_It != allClients.begin() ; client_It++ )
        {
            if(client_It->getId() == id)
                return true ;
        }
        return false ;
    }
    void editClient(int id, string name, int age , string gender ,
                      string password , double balance)
    {
        if(!(searchClient(id) == false))
        {
            Client *c ;
            c->setName(name);
            c->setAge(age);
            c->setGender(gender);
            c->setPassword(password);
            c->setBalance(balance);
        }
        else
            cout << "Sorry , This Client is not exist ." << endl ;
    }
    // Destructor :
    ~Employee ()
    {

    }
};

static vector<Employee> allEmployees ;
static vector<Employee>::iterator employee_It ;

#endif // EMPLOYEE_H
