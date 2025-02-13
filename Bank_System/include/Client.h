#ifndef CLIENT_H
#define CLIENT_H

#include "Person.h"

class Client : public Person
{
private :
    // Attributes :
    double balance ;
public :
    // Default Constructor :
    Client () : Person ()
    {
        this->balance = 0 ;
    }
    // Parameterized Constructor :
    Client (int id , string name , int age , string gender , string password , double balance)
           : Person (id , name , age , gender , password)
    {
        setBalance (balance) ;
    }
    // Setters :
    void setBalance (double balance)
    {
        bool check5 = Validation::validationBalance(balance) ;
        if (check5 == true)
        {
            this->balance = balance ;
        }
        else
        {
            cout << "Sorry , This balance is not validation ." << endl ;
        }
    }
    // Getters :
    double getBalance ()
    {
        return this->balance ;
    }
    // Methods :
    void deposit (double amount)
    {
        this->balance += amount ;
    }
    void withdraw (double amount)
    {
        if (amount <= balance)
        {
            this->balance -= amount ;
        }
        else
        {
            cout << "Sorry , This amount is bigger than your balance ." << endl ;
        }
    }
    void transferTo (double amount ,Client &recipient)
    {
        if (amount <= balance)
        {
            this->balance -= amount ;
            recipient.deposit (amount) ;
        }
        else
        {
            cout << "Sorry , This amount is bigger than your balance ." << endl ;
        }
    }
    /*
    void checkBalance ()
    {

    }
    */
    void display ()
    {
        Person::display() ;
        cout << "Balance is   : " << this->balance << endl ;
    }
    // Destructor :
    ~Client ()
    {

    }
};

#endif // CLIENT_H
