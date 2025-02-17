#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>
#include "Validation.h"
using namespace std ;

class Person
{
protected :
    // Attributes :
    int id , age ;
    string name , gender , password ;
public :
    // Default Constructor :
    Person ()
    {
        this->id = 0 ;
        this->age = 0 ;
        this->name = "" ;
        this->gender = "" ;
        this->password = "" ;
    }
    // Parameterized Constructor :
    Person (int id , string name , int  age , string gender , string password)
    {
        setId (id) ;
        setName (name) ;
        setAge (age) ;
        setGender (gender) ;
        setPassword (password) ;
    }
    // Setters :
    void setId (int id)
    {
        this->id = id ;
    }
    void setName (string name)
    {
        bool check1 = Validation::validationName(name) ;
        if (check1 == true)
        {
            this->name = name ;
        }
        else
        {
            cout << "Sorry , This name is not validation ." << endl ;
        }
    }
    void setAge (int age)
    {
        bool check2 = Validation::validationAge(age) ;
        if (check2 == true)
        {
            this->age = age ;
        }
        else
        {
            cout << "Sorry , This age is not validation ." << endl ;
        }
    }
    void setGender (string gender)
    {
        bool check3 = Validation::validationGender(gender) ;
        if (check3 == true)
        {
            this->gender = gender ;
        }
        else
        {
            cout << "Sorry , This gender is not validation ." << endl ;
        }
    }
    void setPassword (string password)
    {
        bool check4 = Validation::validationPassword(password) ;
        if (check4 == true)
        {
            this->password = password ;
        }
        else
        {
            cout << "Sorry , This password is not validation ." << endl ;
        }
    }
    // Getters :
    int getId ()
    {
        return this->id ;
    }
    string getName ()
    {
        return this->name ;
    }
    int getAge ()
    {
        return this->age ;
    }
    string getGender ()
    {
        return this->gender ;
    }
    string getPassword ()
    {
        return this->password ;
    }
    // Methods :
    virtual void display ()
    {
        cout << "ID is        : " << this->id << endl ;
        cout << "Name is      : " << this->name << endl ;
        cout << "Age is       : " << this->age << endl ;
        cout << "Gender is    : " << this->gender << endl ;
        cout << "Password is  : " << this->password << endl ;
    }
    // Destructor :
    ~Person ()
    {

    }
};

#endif // PERSON_H
